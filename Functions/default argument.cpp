#include<iostream>
using namespace std;

//Default argument
int sum(int num1=0, num2=0)
{
    return num1+num2;
}

int main()
{
   cout<<sum();
}