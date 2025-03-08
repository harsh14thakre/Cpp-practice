#include<iostream>
using namespace std;

int largest()
{
    int large=0;
    for(int i=0; i<9; ++i)
    {
        if(large<arr[i])
        {
            large==arr[i];
        }
    }
    cout<<"The largest value in this array is"<<large;
}

int main()
{

    int arr[]={2,1,3,4,5,6,9,8,7};
    largest();
}
