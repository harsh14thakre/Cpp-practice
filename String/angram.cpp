#include<iostream>
using namespace std;
int main()
{
    string s1="anagram";
    string s2="aaagrnm";

    if(s1.length()!=s2.length())
    {
        cout<<"Not an Anagram";
        return 0;
    }

    for(int i=0; i<s1.length(); ++i)
    {
        bool check=false;
        for(int j=0; j<s1.length(); ++j)
        {
          if(s2[i]==s1[j])
          {
            s1[j]='#';
            check=true;
            break;
          }
        }
        if(check==false)
        {
            cout<<"Not an anagram";
            return 0;
        }
    }
    cout<<"Anagram";

}