#include<iostream>
using namespace std;

//Function overloading:-Function with same name but have different arguments/parameters

int sum()
{
    return 0;
}

int sum(int num)
{
    return num*num;
}
int sum(int num1, int num2)
{
    return num1+num2;
}

int main()
{

    cout<<sum()<<endl;
    cout<<sum(5)<<endl;
    cout<<sum(8,9)
}