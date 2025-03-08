#include<iostream>
using namespace std;
void prime(int n)
{
for(int i=2; i<n; ++i)
{
    if(n%i==0)
    {
        cout<<"This is not a prime number";
        return 0;
    }
}
cout<<"This is a prime number";
}
int main()
{
    int n;
    cout<<"Enter any number";
    cin>>n;
    prime(n);
}