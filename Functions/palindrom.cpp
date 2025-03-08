#include<iostream>
using namespace std;
void palindrom(int n)
{
    int rev=0, cpy=n;
    for(;n!=0;)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    if(cpy==rev)
    {
        cout<<"This number is palindrom";
    }
    else {
        cout<<"This number is not paindrom";
    }
}
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    palindrom(n);
}