// print the output as
// * * * * *
// * * * *
// * * *
// * *
// *
#include<iostream>
using namespace std;
int main()
{
    int r;
    int c;
    cout<<"enter rows"<<endl;
    cin>>r;
    cout<<"enter columns"<<endl;
    cin>>c;
    for(int i=0;i<=r;i++)
    {
        for(int j=c;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }


}

