//a  series where next term is sum of previous 2;
#include<iostream>
using namespace std;
void fib(int n)
{
    int t1=0;
    int t2=1;

    for(int i=1;i<=n;i++)  //for iterating till n terms;
    {
        cout<<t1;  //as we already have t1 
        int next_term=t1+t2;  // ie t2=0+1==1
        t1=t2;  // ie it will print t2 ie 1 in next iteration which we will be considered first
        t2=next_term; 
        cout<<endl;  //and next term to be removed is t3 
    }
    return;
    
}
int main()
{
    int n ; //print n terms of fibonacci series
    cin>>n;
    fib(n);
    return 0;
}