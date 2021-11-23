#include<stdio.h>

int fibnacchi(int n)
{
    if(n == 1)
    {
        return 0;
    }
    if(n == 2)
    {
        return 1;
    }
    else
    {
        return fibnacchi(n-1)+fibnacchi(n-2);
    }
}

int main()
{
    printf("Enter the value of n: ");
    int n;
    scanf("%d", &n);
    printf("%d-th fibnacchi value is : %d\n", n, fibnacchi(n));
    return 0;
}