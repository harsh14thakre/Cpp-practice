#include<iostream>
using namespace std;
int main()
{
    int n,rev=0;
    cout<<"Enter any no.";
    cin>>n;
    int cpy=n;
    for(;n!=0;)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    if(rev==cpy)
    {
        cout<<"This no is palindrom";
    }
    else{
        cout<<"this is not a palindrom no.";    
        }
}