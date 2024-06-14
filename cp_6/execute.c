#include <stdio.h>
#include <stdlib.h>

#include "student.h"
#include "io.h"

typedef struct {
    double avg_mark;
    int group;
} StudentStatistics;

double avg_mark(Student *s)
{
    return (s->dm + s->ma + s->la + s->cs + s->hi) / 5.0;
}

// Using qsort is better, but requires proficiency with pointers :)
void sort(int arr[], int length)
{
    int tmp;
    for (int i = 1; i < length; ++i) {
        for (int j = i; j > 0 && arr[j - 1] > arr[j]; --j) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
        }
    }
}

int payed(Student* s)
{
    if (s->cs < 4 || s->dm < 4 || s->hi < 4 || s->la < 4 || s->ma < 4 || s->gender == 'M')
        return 0;
    return 1;
}

int main(int argc, char *argv[])
{
    if (argc != 3) {
        printf("Usage:\n\t./execute DB_FILE GROUP_NUMBER\n");
        exit(0);
    }

    FILE *in = fopen(argv[1], "r");
    int group = atoi(argv[2]);
    if (!in) {
        printf("I/O Error: can't open file.\n");
        exit(1);
    }

    double avg = 0.0, min_avg = 1000000.0;

    // Each Student maps to { his average mark, his group }
    StudentStatistics students[200] = { { 0.0, -1 } };
    int students_qty = 0;

    // If student's average mark is minimal, his group number appends to min_avg_groups[]
    int min_avg_groups[200] = { -1 };
    int min_avg_groups_qty = 0;

    Student student;

    while (student_read_bin(&student, in)) {
        if ((student.group == group) && payed(&student))
            students_qty += 1;
    }

    fclose(in);

    printf("Amount of female students who gets scholarship: ");
    printf("%d\n", students_qty);

    return 0;
}
