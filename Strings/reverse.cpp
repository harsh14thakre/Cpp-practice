#include<iostream>
using namespace std;
void rev(string &a )
{
   char temp;
   int n=a.length();
   for(int i=0; i<n/2; ++i)
   {
        temp=a[n-i-1];
        a[n-i-1]=a[i];
        a[i]=temp;
   }

}

int main()
{
    string a="HARSH";
    rev(a);
    cout<<a;
}