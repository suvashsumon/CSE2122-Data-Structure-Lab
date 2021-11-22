#include<stdio.h>

int operand(int digit[], int n)
{
    int val = 0, temp = 1;
    for(int i=n; i>=0; i--)
    {
        val += digit[i]*temp;
        temp *= 10;
    }

    return val;
}

int main()
{
    int digits[] = {1,2,3,4,5,6,7,8,9};
    int ans = operand(digits, 5);
    printf("%d", ans);
}