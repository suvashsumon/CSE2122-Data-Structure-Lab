#include<stdio.h>

int factorial(int n)
{
    if(n == 1) return 1;
    return n*factorial(n-1);
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("factorial : %d\n", factorial(n));
    return 0;
}