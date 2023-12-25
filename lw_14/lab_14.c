#include <stdio.h>

#define MAX_SIZE 7

int main(){
    int size, k = 1;
    int matrix[MAX_SIZE][MAX_SIZE];
    printf("Введите размерность: ");
    scanf("%d", &size);

    printf("Введите матрицу:\n");
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Результат:\n");

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            printf("%d ", matrix[i - j][j]);
        }
    }
    for (int i = size - 1; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            printf("%d ", matrix[size - j - 1][size - i + j]);
        }
    }
    putchar('\n');
}
//gcc --std=c99 --pedantic -o main main.c