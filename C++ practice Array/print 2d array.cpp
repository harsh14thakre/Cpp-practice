#include<iostream>
using namespace std;
int main()
{
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    for(int r=0;r<4;++r)
    {
         for(int c=0;c<4;++c)
         {
            cin>>arr[r][c];
            cout<<arr[r][c];
         }
         cout<<"\n";
    }
}