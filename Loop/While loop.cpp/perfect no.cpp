#include<iostream>
using namespace std;
int main()
{
    int n,i=1,sum=0;
    cout<<"Enter the number";
    cin>>n;
    while(i<n)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
   if(sum==n)
        {
            cout<<"This is a perfect number";
            i++;
        }
}