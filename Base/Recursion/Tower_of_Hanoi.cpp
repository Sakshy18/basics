#include<iostream>
#include<string>
using namespace std;

void hanoi(int n, char src, char helper,char dest)
{
    if(n==0)
    {
        return;
    }

    hanoi(n-1,src,dest,helper);//a to b
    cout<<"move from :"<<src<<"to"<<dest<<endl;
    hanoi(n-1,helper,src,dest);//b to c
       //a to b
}

int main()
{
    int n;
    cin>>n;
    hanoi(n,'A','B','C');

}