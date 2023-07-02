#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mx=INT_MIN;
    int arr[6]={0,-9,1,3,-4,5};
    for(int i=0;i<6;i++)
    {
            mx=max(arr[i],mx);
            cout<<mx<<endl;
        
    }
}