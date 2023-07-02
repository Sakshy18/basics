//convert any decimal no to binary
#include<iostream>
using namespace std;
int main()
{
    int arr[32];
    int q;
    int r;
    int num;
    cin>>num;
    
    int i=0;
    while(num>0)
    {
       
        r=num%2;
        arr[i]=r;
        num=num/2;  
         //q==11;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<arr[j]<<" ";
    }

}