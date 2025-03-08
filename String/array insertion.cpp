#include<iostream>
using namespace std;
int main()
{
    int arr[10],n;
    cout<<"Enter size of an array";
    cin>>n;
    cout<<"Enter array Elements";
    for(int i=0; i<n; ++i)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element which should be inserted at the beggining";
    cin>>x;
    for(int i=n; i>0; --i)
    {
        arr[i]=arr[i-1]
    }
    arr[0]=x;
    n++
    cout<<"Array elements are:";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}