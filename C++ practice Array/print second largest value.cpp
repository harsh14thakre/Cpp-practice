#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,7,6};
    int largest=0, large=0;
    for(int i=0; i<7; ++i)
    {
        if(largest<arr[i])
        {
            largest=arr[i];
        }
    }
    for(int i=0; i<7; ++i)
    {
        if(large<arr[i] && arr[i]!=largest)
        {
            large=arr[i];
        }
    }
    cout<<large;
    
}