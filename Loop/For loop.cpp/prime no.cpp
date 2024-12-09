#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your no.";
    cin>>n;
    int count=0;
    for(int i=1;i<=n;++i)
    {
        if(n%i==0)
        {
            count++;
        }
    }
        if(count==2)
        {
            cout<<"This is a prime no.";
        }
        else{
            cout<<"This is not prime no.";    
    }
}