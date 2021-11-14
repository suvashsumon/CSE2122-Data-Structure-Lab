// insert a element into a sorted array

#include<iostream>
using namespace std;
int main()
{
    int arr[6], i, elem;
    cout<<"Enter 5 Array Elements (sorted way): ";
    for(i=0; i<5; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Insert: ";
    cin>>elem;
    int pos;
    for(int i=0; i<5; i++)
    {
        if(arr[i]>=elem){pos = i; break;}
    }
    for(int i=5; i>pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos] = elem;
    for(int i=0; i<6; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}