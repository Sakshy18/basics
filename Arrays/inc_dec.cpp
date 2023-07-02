//print the array in increasing and decreasing order:
#include<bits/stdc++.h>
using namespace std;

void dec(int n)
{
    if(n==0)
    {
        return;
        }
        cout<<n<<endl;   //here we print value and recurse 
    dec(n-1);

}
void inc(int n)
{
    if(n==0)
    {
        return;
    }
        
    inc(n-1);
    cout<<n<<endl;  //here first we recursed till 1 then started printing
}

int main()
{
    int n;
    cin>>n;
    inc(n);


}