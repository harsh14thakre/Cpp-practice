#include<iostream>
using namespace std;
void fabonacci(int a)
{
  int first=0;
  int sec=1;
  int next;
  for(int i=0; i<=a; ++i)
  {
    next=first+sec;
    first=sec;
    sec=next;
    cout<<next;
  }
}
int main()
{
   int n;
   cout<<"Enter the term";
   cin>>n;
fabonacci(n);

}