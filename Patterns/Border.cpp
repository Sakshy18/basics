// print the output as
// ****
// *  *
// *  *
// *  *
// ****
#include<iostream>
using namespace std;
int main()
{
    int rows;
    int columns;
    cout<<"enter rows"<<endl;
    cin>>rows;
    cout<<"enter columns"<<endl;
    cin>>columns;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=columns;j++)
        {
            if(i==1 || i==rows || j==1 || j==columns)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }


}

