//given a number as input find its factors;

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout<<"enter number"<<endl;
    cin>>num;
    int n=num;
    for(int i=1;i<=n;i++)
    {
        if(num %i==0)
        {
            cout<<i<<" ";
            
        }
        

    }
    
}