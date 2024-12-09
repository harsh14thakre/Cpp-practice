#include<iostream>
using namespace std;
int main()
{
    int n,i=1,mult=1;
    cout<<"Enter the number";
    cin>>n;
    while(i<=n)
    {
        mult=mult*i;
        ++i;
    }
    cout<<mult;
}