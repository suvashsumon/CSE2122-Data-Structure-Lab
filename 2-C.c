// insert a element into a array (position given)

#include<stdio.h>
int main()
{
    int arr[6], i, elem;
    printf("Enter 5 Array Elements (sorted way): ");
    for(i=0; i<5; i++)
        scanf("%d", &arr[i]);
    printf("\nEnter Element to Insert: ");
    scanf("%d", &elem);
    int pos;
    printf("\nEnter position to Insert: ");
    scanf("%d", &pos);
    for(int i=5; i>pos-1; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = elem;
    for(int i=0; i<6; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}