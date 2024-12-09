#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={};
    for(int r=0;r<3;++r)
    {
        for(int c=0;c<3;++c)
        {
            cout<<"Enter the values";
            cin>>arr[r][c];
        }
        cout<<"\n";
    } 
    cout<<"\n";
    
    for(int r=0;r<3;++r)
    {
        for(int c=0;c<3;++c)
        {
            cout<<arr[r][c];
        }
        cout<<"\n";
    } 
    cout<<"\n";

    arr[1][0]=40;
    for(int r=0;r<3;++r)
    {
        for(int c=0;c<3;++c)
        {
            cout<<arr[r][c];
        }
        cout<<"\n";
    } 

}