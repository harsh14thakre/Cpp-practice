#include<iostream>
using namespace std;
void armstrong(int a)
{
    int digit=0,sum=0;
    int cpy=a;
    for(;a!=0;)
    {
        digit=a%10;
        sum=digit*digit*digit+sum;
        a=a/10;
    }
    if(cpy==sum)
    {
       cout<<"This number is armstrong";
    }
    else{
        cout<<"This number is not armstrong";
    }
}
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    armstrong(n);
}