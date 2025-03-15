#include<iostream>
using namespace std;
void sortarray(int arr[], int size)
{
   for(int i=0; i<size; ++i)
   {
    for(int j=i+1; j<size; ++j)
    {
        if(arr[i]>arr[j])
        {
            swap(arr[i],arr[j]);
        }
    }
   }
}
void showarray(int arr[], int size)
{
    for(int i=0; i<size; ++i)
    {
        cout<<arr[i];
    }
}
int main()
{

    int arr[]={2,3,1,4,5,6,8,7,9};
    sortarray(arr,sizeof(arr)/sizeof(arr[0]));
    showarray(arr,sizeof(arr)/sizeof(arr[0]));
}

