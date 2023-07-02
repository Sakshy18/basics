#include<bits/stdc++.h>
using namespace std;


//method :4 using ulta for loop and cout each word from last
// int main()
// {
//     string s;
//     cin>>s;
//     for(int i= s.length()-1; i>=0;i--)
//     {
//         cout<<s[i];
//     }
// }

//method:3 using inbuilt reverse method no extra array reverse in same array

// int main()
// {
//     string s;
//     cin>>s;
//     reverse(s.begin(), s.end());
//     cout<<s<<endl;
// }


//method:2 using a temp variable and making reverse in same string 

// int main()
// {
//     string s;
//     cin>>s;
//     int n= s.length();
//     int temp;
//     for(int i=0;i<n/2;i++)   //sakshi //iakshi
//     {
//        temp=s[i];
//        s[i]=s[n-i-1];
//        s[n-i-1]=temp;

//     }
//     cout<<s<<endl;
// }




//method:1 storing reverse in other array uses 2 arrays
// int main()
// {
//     char s[15];
//     char rev[15];
//     cin>>s;  
//     int n=0;
//     while(s[n] != '\0')
//     {
//         n++;
//     }
    
//     int j=n-1;
//     for(int i=0;i<=n;i++)
//     {
//        rev[i]=s[j];
//         j--;
//     }
//     cout<<rev<<endl;

// }