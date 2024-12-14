#include<iostream>
using namespace std;
int main()
{
    int k;
    cout<<"Enter the value";
    cin>>k;
    int arr[]={10,20,30,40,50,60};
    
        for(int i=0; i<k; ++i)
        { int temp=0;
            for(int j=i+1; j<6; ++j)
            {
                if(arr[j]>arr[i])
                {
                   temp=arr[i];
                   arr[i]=arr[j];
                   arr[j]=temp;
                }
            }

        }
    
    cout<<k<<"th"<<"largest value is"<<arr[k-1];
} 