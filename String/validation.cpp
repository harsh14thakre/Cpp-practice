#include<iostream>
using namespace std;
int main()
{
    string s="{[()]}";
    int curly=0,square=0,circle=0;
    // int size=s.length()-1;
    for(int i=0; i<s.length();++i)
    {
        if(s[i]=='{')
        {
           curly++;
        }
        else if(s[i]=='(')
        {
            circle++;
        }
        else if(s[i]=='[')
        {
             square++;
        }
        else if(s[i]=='}')
        {
            curly--;
            if(curly<0)
            {
                cout<<"Invalid";
                return 0;
            }
        }
        else if(s[i]==')')
        {
            circle--;
            if(circle<0)
            {
                cout<<"Invalid";
                return 0;
            }
        }
        else if(s[i]==']')
        {
            square--;
            if(square<0)
            {
                cout<<"Invalid";
                return 0;
            }
        }
        
    }
    if(square==0 && curly==0 && circle==0)
    {
        cout<<"Valid";
    }
    else{
        cout<<"Invalid";
    }

}