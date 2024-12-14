#include<iostream>
using namespace std;
int main()
{
   int arr[]={1,2,3,4,5,6,7,8};

   for(int i=0; i<8; ++i)
   {
    if(arr[i]%2==0)
    {
        cout<<arr[i]<<"is even\n";
    }
    else{
        cout<<arr[i]<<"is odd\n";
    }
   } 
}