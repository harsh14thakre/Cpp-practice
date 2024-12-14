#include<iostream>
using namespace std;
int main()
{   
     int n=5;
    int arr[n]={1,2,1,2,1};
    int array[n];
    // array[n]=arr[n];

    for(int i=0; i<5; ++i)
    {
        array[i]=arr[i];
    }

    for(int i=0; i<n/2; ++i)
    {
        int temp=arr[n-i-1];
        arr[n-i-1]=arr[i];
        arr[i]=temp;
    }

    for(int i=0; i<n; ++i)
    {
        if(array[i]!=arr[i])
        {
            cout<<"Array is not palindrom";
            return 0;
        }
    }
    cout<<"Array is palindrom";
    


}