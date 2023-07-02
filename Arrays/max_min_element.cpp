#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,maxi,mini;    //1 19 2 13 4    
    cin>>n;
    int i;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    first 2 element se ek ko min ek max and compare remaining after 2nd index with them to find min and max;
        if(arr[0]>arr[1])
        {
             maxi=arr[0];
             mini=arr[1];
        }
        else
            maxi=arr[1];
            mini=arr[0];

    for(int i=2;i<n;i++)
    {
        if(arr[i]>maxi)  //maxi 19 //mini =1 //1 19 2 13 4    
        {
            maxi=arr[i];
        }
        if(arr[i]<mini)
        {
            mini=arr[i];
        }
    }
    
}

  

// 2nd approach
//1 5 3 2 4

    
    //first 2 element se ek ko min ek max and compare remaining after 2nd index with them to find min and max;
    //     if(arr[0]>arr[1])
    //     {
    //          maxi=arr[0];
    //          mini=arr[1];
    //     }
    //     else
    //         maxi=arr[1];
    //         mini=arr[0];

    // for(int i=2;i<n;i++)
    // {
    //     if(arr[i]>maxi)  //maxi 19 //mini =1 //1 19 2 13 4    
    //     {
    //         maxi=arr[i];
    //     }
    //     if(arr[i]<mini)
    //     {
    //         mini=arr[i];
    //     }
    // }


    // if(n%2==0)  //array is even length ie 2 pairsbanega
    // {
    // if(arr[0]>arr[1])
    // {
    //     maxi=arr[0];
    //     mini=arr[1];
    // }
    // else
    // {
    //     maxi=arr[1];
    //     mini=arr[0];
    // }
    //  i=2;
    // }
    // else
    // {
    //     maxi=arr[0];
    //     mini=arr[0];
    //     i=1;

    // }
    // while(i<n-1) //1 2 3 5 4   mini maxi==1  2<5 max=5, min=2 i=2;
    // {               // 1 5 3 2 4   1>6 
    //     if(arr[i]>arr[i+1])
    //     {
    //         if(arr[i]>maxi)
    //         {
    //             maxi=arr[i];
    //         }
    //         if(arr[i+1]<mini)
    //         {
    //             arr[i+1]=mini;
    //         }
           
            
    //     }
    //     else 
    //     {
    //         if(arr[i+1]>maxi)
    //     {
    //         arr[i+1]=maxi;
    //     }
    //     if(arr[i]<mini)
    //     {
    //         mini=arr[i];
    //     } 
    //     }
        
    //     i=i+2;
    // }
    // cout<<maxi<<":max\n"<<mini<<":min"<<endl;