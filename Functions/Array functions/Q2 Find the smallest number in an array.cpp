#include<iostream>
// using namespace std;
// void smallest(int arr[],int size)
// {
//     int small=0;
//     for(int i=0; i<size; ++i)
//     {
//         if(small>arr[i])
//         {
//             small=arr[i];
//         }
//     }
//     cout<<"The smallest value in this array is"<<small;   
// }

// int main()
// {

//     int arr[]={2,1,3,4,5,6,9,8,7,12};
//     smallest(arr,10);
    
// }


#include<iostream>
using namespace std;
int min(int arr[], int size)
{
    int small=0;
    for(int i=0; i<size; ++i)
    {
        if(arr[i]<small)
        {
            small=arr[i];
        }
    }
    return small;
}
int main()
{ 
    int n;
    cout<<"Enter the size of an array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array";
    for(int i=0; i<n; ++i)
    {
        cin>>arr[i];
    }
    cout<<"The smallest value in this array is"<<min(arr,n);
}
