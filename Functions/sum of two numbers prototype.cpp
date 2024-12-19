#include<iostream>
using namespace std;

// Function prototype
// tye function-name (arguments);
// int sum(int a, int b);  //--> Acceptable
// int sum(int, int);  //---> Acceptable
int sum(int a, int b);
void g();  //--> Acceptable 

int main()
{
    int num1, num2;
    cout<<"Enter 1st number";
    cin>>num1;
    cout<<"Enter the second number";
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<<"The sum is="<<sum(num1,num2);
    return 0;
}

int sum(int a, int b)
{
    // Formal Parameters a and b will be taking from actual parameters num1 and num2.
    int c=a+b;
    return c;
}

void g(){
    cout<<"\nHello, Good Morning";
}