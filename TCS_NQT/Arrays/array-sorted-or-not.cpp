#include<bits/stdc++.h>
using namespace std;


int sorted(int arr[],int size)
{
    if(size==0 || size==1)
    {
        return 1;
    }

    if(arr[size-2]>arr[size-1])
    {
        return 0;
    }

    return sorted(arr,size-1);
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,12,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    if(sorted(arr,size)) {
        cout<<"true"<<endl;
    }

    else
    {
        cout<<"false"<<endl;
    }
}