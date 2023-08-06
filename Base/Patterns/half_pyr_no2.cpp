// 11111
// 2222
// 333
// 44
// 5
// print the output as     
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter num"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {

            cout<<i;

        }
        cout<<endl;
    }


}


