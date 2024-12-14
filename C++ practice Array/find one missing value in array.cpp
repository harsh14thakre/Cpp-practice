#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,12,13,15,16};
    for(int i=0; i<5; ++i)
    {
        if(arr[i+1]-arr[i]>1)
        {
            cout<<arr[i]+1<<endl;
        }
    }
}