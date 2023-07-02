#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,n3;

    cin>>n1>>n2>>n3;  //row and col
    int m1[n1][n2]; 
     int m2[n2][n3]; 
      int ans[n1][n3]; 
      cout<<"enter values for 1st matrix"<<endl;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cin>>m1[i][j];
        }
    }
    cout<<"enter values for 2nd matrix"<<endl;
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cin>>m2[i][j];
        }
    }
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            ans[i][j]=0;
        }
    }
    cout<<"******** answer is ******"<<endl;
    //multiply

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            for(int k=0;k<n2;k++)
            {
                ans[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }



    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)  //printing matrix
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
//resultant ka dimension for 2 matrix of size n1xn2 and n2xn3 is n1xn3
