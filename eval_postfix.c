#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>

int max_size = 100;
int top = -1;
float stack[100];

bool isEmpty()
{
    if(top == -1) return true;
    else return false;
}

bool isFull()
{
    if(top == max_size) return true;
    else return false;
}

char pop()
{
    if(!isEmpty())
    {
        top--;
        return stack[top+1];
    }
    else
    {
        printf("Stack is empty");
    }
}

void push(float val)
{
    if(!isFull())
    {
        stack[top+1] = val;
        top = top + 1;
    }
    else
    {
        printf("Stack is full");
    }
}

void display()
{
    for(int i=0; i<=top; i++)
    {
        printf("%f ", stack[i]);
    }
    printf("\n");
}

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
    char expression[500];
    fgets(expression, 500, stdin);

    /// input manipulation
    int i = 0;
    int digits[100] = {0};
    int temp, count = 0;
    int op1, op2;
    while(expression[i]!='\n')
    {
        if(expression[i]==',')
        {
            if(isdigit(expression[i-1])) push(operand(digits, count-1));
            temp = 0;
            count = 0;
        }
        else if(expression[i]=='+')
        {
            op1 = pop();
            op2 = pop();
            push(op1+op2);
        }
        else if(expression[i]=='-')
        {
            op1 = pop();
            op2 = pop();
            push(op2-op1);
        }
        else if(expression[i]=='*')
        {
            op1 = pop();
            op2 = pop();
            push(op1*op2);
        }
        else if(expression[i]=='/')
        {
            op1 = pop();
            op2 = pop();
            push(op2/op1);
        }
        else
        {
            digits[count] = expression[i]-'0';
            count++;
        }

        i++;
    }
    float ans = pop();
    printf("Ans : %f\n", ans);

    return 0;
}