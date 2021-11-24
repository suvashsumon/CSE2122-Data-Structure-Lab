#include<stdio.h>

int * matrix_multiplication(int a[100][100], int b[100][100])
{
    static int m[100][100];
    int sum = 0;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            sum=0;
            for(int k=0; k<2; k++)
                sum = sum + a[i][k] * b[k][j];
            m[i][j] = sum;
        }
    }
    return *m;
}

int main()
{
    int a[100][100];
    int b[100][100];
    printf("Enter first array :\n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter first array :\n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    int * res = matrix_multiplication(a, b);
    printf("Result of Multiplication :\n");

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d ", *(res+i));
        }
        printf("\n");
    }
}