// Non return type without parameter

#include<iostream>
using namespace std;

void hello()
{
    cout<<"Hello";
}

int main()
{
    hello();
}



// Non return type with parameter


#include<iostream>
using namespace std;
void sum(int a, int b)
{
    cout<<a+b;
}
int main()
{
    sum(5,7);
}



// Non return type with parmeter  by taking values from user;

#include<iostream>
using namespace std;
void sum(int a, int b)  
{
    cout<<a+b;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    sum(a,b);
}



 
//Non return type with parameter

#include<iostream>
using namespace std;

void fabonacci(int num)
{

    int ft=0;
    int sec=1;
    int next;
    for(int i=0; i<=num; ++i)
    {
        next=ft+sec;
        ft=sec;
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



