#include<stdio.h>

int main()
{
    char arr[25][50];
    int n;
    printf("Enter number of array size : ");
    scanf("%d", &n);
    printf("Enter %d strings :\n", n);
    for(int i=0; i<=n; i++)
    {
        fgets(arr[i], sizeof arr, stdin);
    }

    printf("Enter new item to insert: ");
    

    // functionality of inserting new item
    for(int i=0; i<n; i++)
    {
        if(strcmp())
    }

    for(int i=0; i<=n; i++)
    {
        printf("%s", arr[i]);
    }
}