#include<iostream>
using namespace std;

void armstrong(int n)
{
    int cpy=n;
    int sum=0,digit=0;
    
    for(;n!=0;)
    {   
        digit=n%10;
        sum=digit*digit*digit+sum;
        n=n/10;
    }
    if(cpy==sum)
    {
        cout<<"This is an armstrong number";
    }

}


int main()
{
int n;
cout<<"Enter three digits";
cin>>n;
armstrong(n);
}