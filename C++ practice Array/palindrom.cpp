#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,1,2,1};
    int n=5;
    int array[];

    for(int i=0;i<n;++i)
    {
        array[i]=arr[i];
    }

    for(int i=0; i<n/2; ++i)
    {
        int temp=arr[n-i-1];
        arr[n-i-1]=arr[i];
        arr[i]=temp;

    }

    if()--
    for(int i=0;i<n;++i)
    {
        cout<<arr[i];
    }

}