#include<stdio.h>

int tree[500] = {0};

void insert(int new)
{
    int i = 0, root = 0;
    while(1)
    {
        if(tree[i] == new)
        {
            printf("Already in position => %d\n", i);
            break;
        }
        else if(tree[i] == 0) //place is empty so data can be inserted
        {
            tree[i] = new;
            break;
        }
        else if(new < tree[i])
        {
            i = 2*i + 1;
        }
        else if(new > tree[i])
        {
            i = 2*i + 2;
        }
    }
}

void display()
{
    printf("Index => Value\n");
    for(int i=0; i<15; i++)
    {
        printf("%d => %d\n", i, tree[i]);
    }
}

int main()
{
    insert(8);
    insert(3);
    insert(10);
    insert(1);
    insert(6);
    insert(14);
    insert(4);
    insert(7);
    insert(13);
    display();
    insert(7);
}