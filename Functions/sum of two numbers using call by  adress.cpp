#include<iostream>
using namespace std;
void sum(int &num)
{
    num=num+10;
    cout<<num<<endl ;
}
int main()
{ 
    int x;
    cout<<"Enter number";
    cin>>x;
    sum(x);
    cout<<x<<endl;
}


// #include<iostream>
// using namespace std;
// void sum(int &num)
// {
//     num=num+10;
//     cout<<num<<endl ;
// }
// int main()
// { 
//     int x;
//     cout<<"Enter number";
//     cin>>x;
//     sum(x);
//     cout<<x<<endl;
// }