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
        bool check=true;
        for(int j=0; i<s1.length(); ++i)
        {
          if(s1[i]==s2[j])
          {
            s1[j]='#';
            check=false;
          }
        }
    }

}