#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,40,5,6};
    arr[3]=50;
        for(int i=0;i<6;++i)
        {
            if(arr[i]!=50)
            {
            cout<<arr[i]<<", ";
            }
        }
}