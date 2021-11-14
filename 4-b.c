// bubble sort to a string array

#include<stdio.h>
#include<string.h>

int main()
{
    char arr[25][50], temp[15];
    int n;
    printf("Enter number of strings : ");
    scanf("%d", &n);

    printf("Input %d strings :\n", n);
    for(int i=0; i<=n; i++)
    {
        fgets(arr[i], sizeof arr, stdin);
    }

    // bubble sort functionality
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<=n-i; j++)
        {
            if(strcmp(arr[j],arr[j+1])>0)
            {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }


    // printing the string array
    for (int i = 0; i <= n; i++)
    {
        printf("%s", arr[i]);
    }
    
}