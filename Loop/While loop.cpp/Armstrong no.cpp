#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,digit=0;
    cout<<"Enter the number";
    cin>>n;
     int cpy=n;
    while(n!=0)
    {
        digit=n%10;
        sum=sum+digit*digit*digit;
        n=n/10;
    }
    if(sum==cpy)
    {
        cout<<"This is an armstrong number";
    }
    else{
        cout<<"This no. is not armstrong";
    }
}