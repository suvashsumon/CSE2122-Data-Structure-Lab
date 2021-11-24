#include<stdio.h>


int main()
{
    int a[100][100];
    int b[100][100];
    int m[100][100];
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

    printf("Result of Multiplication :\n");
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

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}