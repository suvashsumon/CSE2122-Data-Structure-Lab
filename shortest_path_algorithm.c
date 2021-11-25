#include<stdio.h>

int w[100][100]; // adjacency matrix / weighted matrix
int q[100][100];

int min(int a, int b)
{
    if(a<b) return a;
    else return b;
}

void shortest_path(int m)
{
    // initializing q according w
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(w[i][j] == 0) q[i][j] = 999999; //consider as infinite
            else q[i][j] = w[i][j];
        }
    }

    for(int k=0; k<m; k++)
    {
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<m; j++)
            {
                q[i][j] = min(q[i][j], q[i][k]+q[k][j]);
            }
        }
    }
}

int main()
{
    int m; // rank of adjacent matrix
    // printf("Enter the rank of adjacency matrix : ");
    scanf("%d", &m);
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<m; j++) scanf("%d", &w[i][j]);
    }

    shortest_path(m);

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(q[i][j] != 999999) printf("%d ", q[i][j]); // has a path
            else printf("X "); // there is no path
        }
        printf("\n");
    }
}