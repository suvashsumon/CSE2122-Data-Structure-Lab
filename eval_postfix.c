#include<stdio.h>
#include<stdbool.h>

int max_size = 100;
int top = -1;
int stack[100];

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

int pop()
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

void push(int val)
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
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main()
{
    
}