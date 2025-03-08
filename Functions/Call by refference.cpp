#include<iostream>
using namespace std;
//Call by refference

int pluseone(int &num) //Formal parameter
{
    num=num+1;
    return num;
}

int main()
{

    int a=10;
    cout<<pluseone(a)<<end; //Actual parameter
    cout<<"a="<<a;
}