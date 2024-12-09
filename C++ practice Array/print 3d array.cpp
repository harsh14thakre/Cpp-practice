#include<iostream>
using namespace std;
int main()
{
    int arr[3][2][2]={{{1,2},{3,4}},{{5,6},{7,8}},{{9,10},{11,12}}};
    for(int d=0;d<3;++d)
    {
        for(int r=0;r<2;++r)
        {
            for(int c=0;c<2;++c)
            {
                cout<<arr[d][r][c];
            }
            cout<<"\n";
        }
         cout<<"\n";
    }
}