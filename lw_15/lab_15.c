#include <stdio.h>

#define MAX_SIZE 7

void replaceDiagonalSums(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    // Заменяем элементы главной диагонали суммами элементов побочных диагоналей
    for (int i = 0; i < size; i++) {
        int diagonalSum = 0;
        int k = i;

        // Суммируем элементы побочной диагонали, проходящей через элемент главной диагонали
        for (int j = i; j > 0; --j) {
            if (k < size - 1)
                diagonalSum += matrix[k + 1][j - 1];
            else
                break;
            k++;
        }
        k = i;
        for (int j = i; j < size - 1; ++j) {
            if (k > 0)
                diagonalSum += matrix[k - 1][j + 1];
            else
                break;
            k--;
        }

        // Заменяем элемент главной диагонали суммой элементов побочной диагонали
        if (diagonalSum !=0)
            matrix[i][i] = diagonalSum;
    }
}

void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    // Выводим матрицу на экран
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int size;
    printf("Введите размер матрицы: ");
    scanf("%d", &size);
    int matrix[MAX_SIZE][MAX_SIZE];
    printf("Введите элементы матрицы:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    replaceDiagonalSums(matrix, size);
    printf("\nИзмененная матрица:\n");
    printMatrix(matrix, size);
    return 0;
}
