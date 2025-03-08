// Return type with parameter


#include<iostream>
using namespace std;
int sum(int a, int b, int c)
{
    
    return (a+b)*c;
}
int main()
{
    int a,b,c;
    cout<<"Enter two numbers";
    cin>>a>>b>>c;
   cout<< sum(a,b,c);
}




//Return type without parameter

#include<iostream>
using namespace std;

string hello()
{
    return "Hello";
}

int main()
{
    cout<<hello();
}



//Return type without parameter


#include<iostream>
using namespace std;

float pi()
{
    return 3.14;
}

int main()
{
    cout<<pi();
}


//Return type with parameter


#include<iostream>
using namespace std;

int multipy(int a, int b)
{
    return a*b;
}

int main()
{
   cout<<multiply(4,5);
}



//Return type with parameter


#include<iostream>
using namespace std;

int factorial(int num)
{   int ans=1;
    for(int i=0; i<=num; ++i)
    {
         ans=ans*i;
    }
    return sum;
}

int main()
{
    cout<<factorial(5);

}







//Return type with parameter

#include<iostream>
using namespace std;
string primenumber(int n)
{
    for(int i=2; i<n; ++i)
    {
        if(n%i==0)
        {
        cout<<"This is a prime number";
        return 0;

        }
    }
    
        cout<<"This is a prime number";
        return 0;
}
int main()
{
   int n;
   cout<<"Enter any number";
   cin>>n;
   cout<<primenumber(n)
}


// ---------------------------------------------------------------------------------



#include<iostream>
using namespace std;
string primenumber(int num)
{
    for(int i=2; i<num; ++i)
    {
        if(num%i==0)
        {
        return "This is not a prime number";
        }
    }
       return "This is a prime number";

}
int main()
{
   int n;
   cout<<"Enter any number";
   cin>>n;
   cout<<primenumber(n);
}