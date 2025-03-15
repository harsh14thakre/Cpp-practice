#include<iostream>
using namespace std;

void palindrom(int arr[])
{
    int i=0;
    int j=4;
    while(i<j)
    {
        if(arr[i]!=arr[j])
        {
            cout<<"Not palindrom";
            return 0;
        }
        i++;
        j++;
    }
    cout<<"Palindrom";
}
int  main()
{
    int arr[]={1,2,1,2,1};
    palindrom(arr);
}



#include<iostream>
using namespace std;

void palindrom(int arr[])
{
    int i=0;
    int j=4;
    while(i<j)
    {
        if(arr[j]!=arr[i])
        {
            cout<<"Not palindrom";
            break;
        }
        i++;
        j++;
    }
    cout<<"Palindrom";
}
int  main()
{

    int arr[]={1,2,1,2,1};
    palindrom(arr);
}