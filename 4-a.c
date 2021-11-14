// sort a integer array using bubble sort

#include <stdio.h>

int main()
{
    int arr[5];
    printf("Enter 5 elements : ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    int temp;

    for(int i=0; i<5-1; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(arr[j]<arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}