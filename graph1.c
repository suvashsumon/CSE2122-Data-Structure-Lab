#include<stdio.h>

int result[100][100];

void matrix_multiplication(int a[100][100], int b[100][100], int m)
{
    int sum = 0, res[100][100] = {0};
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            sum=0;
            for(int k=0; k<2; k++)
                sum = sum + a[i][k] * b[k][j];
            res[i][j] = sum;
        }
    }
    
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<m; j++)
        {
            result[i][j] = res[i][j];
        }
    }
}

int main()
{
    int m; // for m vartices
    printf("Enter the number of vertices : ");
    scanf("%d", &m);
    int adj[m][m];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &adj[i][j]);
        }
    }

    // ajdacent of v1, v2, v3,......
    for(int i=0; i<m; i++)
    {
        printf("Adjacent of V%d => ", i+1);
        for(int j=0; j<m; j++)
        {
            if(adj[i][j] != 0) printf("V%d ", j+1);
        }
        printf("\n");
    }

    // no. of paths of length 2 from vertices vi to vj
    matrix_multiplication(adj, adj, m);
    // matrix_multiplication(result, adj, m);
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}