#include<iostream>
using namespace std;
int main()
{
    int n,mult=1;
    cout<<"Enter any no.";
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        mult=mult*i;
    }
    cout<<mult;
}