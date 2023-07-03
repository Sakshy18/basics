#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;  //row and col
    int arr[m][n]; //row and column   //initialising matrix
    for(int i=0;i<m;i++)  //matrix input
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"******************"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)  //printing matrix
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}