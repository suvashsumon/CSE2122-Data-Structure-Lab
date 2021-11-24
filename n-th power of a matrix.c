#include <stdio.h>

void mul();
int a[10][10], c[10][10], r;
void main()
{
    int i, j, n;
    printf("Enter the order of the matrix:");
    scanf("%d", &r);
    printf("Enter the Matrix\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
        {
            scanf("%d", &a[i][j]);
            if (i == j)
                c[i][j] = 1;
            else
                c[i][j] = 0;
        }
    }
    printf("Enter the power : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        mul();
    printf("\n\nAnswer\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
            printf(" %d", c[i][j]);
        printf("\n");
    }
}

// first time identity matrix doesnot change anything ... then the
// identity matrix become the matrix ... so from the 2nd time it change 
// result of multiplication
void mul()
{
    int b[10][10], i, j, k;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
        {
            b[i][j] = 0;
            for (k = 0; k < r; k++)
                b[i][j] = b[i][j] + a[i][k] * c[k][j];
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
            c[i][j] = b[i][j];
    }
}