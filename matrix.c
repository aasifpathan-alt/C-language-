#include <stdio.h>

int main()
{
    int R1, C1, R2, C2;

    printf("enetr the number of rows and coloms you want in Matrics A \n");
    scanf("%d%d", &R1, &C1);

    printf("enetr the number of rows and coloms you want in Matrics B \n");
    scanf("%d%d", &R2, &C2);

    if (C1 != R2)
    {
        printf("error!! matrix multiplication of given dimension is not possible");
        return 1;
    }

    int first[R1][C1], second[R2][C2], result[R1][C2];

    printf("enter the elements of matrix A\n");
    for (int i = 0; i < R1; ++i)
    {
        for (int j = 0; j < C1; ++j)
        {
            printf("enetr element a %d %d\n", i + 1, j + 1);
            scanf("%d", &first[i][j]);
        }
    }

    printf("enter the elements of matrix B\n");
    for (int i = 0; i < R2; ++i)
    {
        for (int j = 0; j < C2; ++j)
        {
            printf("enetr element b %d %d\n", i + 1, j + 1);
            scanf("%d", &second[i][j]);
        }
    }

    for (int i = 0; i < R1; ++i)
    {
        for (int j = 0; j < C2; ++j)
        {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < R1; ++i)
    {
        for (int j = 0; j < C2; ++j)
        {
            for (int k = 0; k < C1; ++k)
            {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
        printf("Resultant matrix:\n");
        for (int i = 0; i < R1; ++i)
        {
            for (int j = 0; j < C2; ++j)
            {
                printf("%d  ", result[i][j]);
            }
            printf("\n");
        }
        return 0;
    }