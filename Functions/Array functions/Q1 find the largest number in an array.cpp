// #include<iostream>
// using namespace std;
// void largest(int arr[],int size)
// {
//     int large=0;
//     for(int i=0; i<size; ++i)
//     {
//         if(large<arr[i])
//         {
//             large=arr[i];
//         }
//     }
//     cout<<"The largest value in this array is"<<large;   
// }

// int main()
// {

//     int arr[]={2,1,3,4,5,6,9,8,7,12};
//     largest(arr,10);
    
// }


#include<iostream>
using namespace std;

int max(int arr[], int size)
{
    int large=0;
    for(int i=0; i<size; ++i)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    return large;

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

    cout<<"The largest value in this array is"<<max(arr,n);


}
