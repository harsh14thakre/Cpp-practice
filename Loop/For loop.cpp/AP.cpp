#include<iostream>
using namespace std;
int main()
{
    int a,term;
    cout<<"Enter the first number";
    cin>>a;
    int d;
    cout<<"Enter the difference between";
    cin>>d;
    int n;
    cout<<"Enter the terms to be print";
    cin>>n;
    for(int i=0;i<=n-1;++i)
    {
        term=a+i*d;
        cout<<term<<" ";
    }

}