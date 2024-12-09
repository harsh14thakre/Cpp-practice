#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;++i)
    {
        if(arr[i]==5)
        {
            cout<<"Found"<<endl;
            return 0;
        }  
    }
    cout<<"Not found";
}