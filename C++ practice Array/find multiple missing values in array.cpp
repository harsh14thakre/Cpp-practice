#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,13,15,16};
    
    for(int i=0; i<5; ++i)
    {   
        if(arr[i+1]-arr[i]>1)
        {
            for(int j=arr[i]+1;j<arr[i+1];++j)
            {
                cout<<j<<endl;
            }
        }
    }
}













