// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,0,2,0,5};
//     int j=0;
//     for(int i=0; i<5; ++i)
//     {
//        if(arr[i]!=0)
//        {
//         arr[j]=arr[i];
//         j++;
//        }
//     }
//     for(int i=j; i<5; ++i)
//     {
//         arr[j]=0;
//         j++;
//     }
//     for(int i=0; i<5; ++i)
//     {
//         cout<<arr[i]<<"\n";
//     }
// }

#include<iostream>
using namespace std;
int main()
{
    int arr[]{10,20,13,15,16};
    
    for(int i=0; i<5; ++i)
    {
        if(arr[i+1]-arr[i]>1)
        {
            for(int j=arr[i]+1;j<arr[i+1];++j)
            {
                cout<<j<<endl;
            }
        }
    }
}