//har ek subaaray ka count ie sum op
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=i;j<n;j++)
        {
          count=count+arr[j];
            cout<<count<<endl;
        }
        
    }

}