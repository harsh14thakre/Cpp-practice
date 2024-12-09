#include<iostream>
using namespace std;
int main()
{
    int n,rev=0;
    cout<<"Enter the number";
    cin>>n;
    int cpy=n;
    while(n!=0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    if(rev==cpy)
    {
        cout<<"This no. is palindrom";
    }
    else{
        cout<<"This no. is not palindrom";
    }
}