#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,1,3,4,5,2,6};
    
    for(int i=0;i<8;++i)
    {
        bool dup=false;

        for(int j=0;j<8;++j)
        {
            if(arr[i]==arr[j] && arr[i]!=-1)
            {
               dup=true;
               arr[j]=-1;
               break;
            }
        }
        if(dup==false && arr[i]!=-1)
        {
           cout<<arr[i];
        }
    }
}