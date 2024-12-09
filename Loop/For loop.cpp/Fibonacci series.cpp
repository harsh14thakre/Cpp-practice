// #include<iostream>
// using namespace std;
// int main()
// {
//     int a1=0,a2=1,n,a3;
//     cout<<"Enter the number of terms";
//     cin>>n;
//     for(int i=1;i<=n;++i)
//     {
//         if(i==1)
//         {
//             cout<<a1<<" ";
//             continue;
//         }
//         if(i==2)
//         {
//             cout<<a2<<" ";
//             continue;
//         }
//         a3=a1+a2;
//         a1=a2;
//         a2=a3;
//         cout<<a3<<" ";
//     }
// }






#include<iostream>
using namespace std;
int main()
{
    int a1=0,a2=1,a3,n,i=1;
    cout<<"Enter the number the term";
    cin>>n;
    while(i<=n)
    {
        if(i==1)
        {
            cout<<a1;
            continue;
        }
        if(i==2)
        {
            cout<<a2;
            continue;
        }
        a3=a1+a2;
        a1=a2;
        a2=a3;
        cout<<a3;
        ++i;

    }
}