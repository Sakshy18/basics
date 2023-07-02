#include<bits/stdc++.h>
using namespace std;


int lastocc(int arr[], int n, int i, int key)
{
    if(n==i)   //last element tak pohcha to return -1;
       {
        return -1;
       }
    
    int restarr= lastocc(arr,n,i+1,key); 
    if(restarr!=-1)
    {
        return restarr;
    }
    
    if(arr[i]==key)
    {
        return i;
    }  
    return -1;
}

int firstocc(int arr[],int n, int i, int key)
{
    if(n==i)   //last element tak pohcha to return -1;
        return -1;
    if(arr[i]==key)
    {
        return i;
    }   
    return firstocc(arr,n,i+1,key); 
}


int main()
{
    int arr[7]={4,2,5,3,2,7,9};
   

    int ans=lastocc(arr,7,0,2);
    cout<<ans;
}