#include<iostream>
using namespace std;
 
void toggle(string &str)
{
    for(int i=0; i<str.length(); ++i)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
       else  if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    } 
} 


int main()
{
    string str="VaNsH";
    toggle(str);
    cout<<str;
}