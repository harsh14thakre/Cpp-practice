#include<iostream>
using namespace std;
void rev(string &a,string &arr )
{
   char temp;
   int n=a.length();

   for(int i=0; i<n/2; ++i)
   {
        temp=a[n-i-1];
        a[n-i-1]=a[i];
        a[i]=temp;
   }
   if(a==arr)
   {
    cout<<"array is palindrom";
   }
   else{
       cout<<"Array is not plindrom";
   }
   
}


int main()
{
    string a="abcba";
    string arr=a;
    rev(a,arr);
}