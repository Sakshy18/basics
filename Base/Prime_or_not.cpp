#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int flag=0;
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            cout<<"not prime"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"prime number"<<endl;
    }
}
/*
OPTIMIZATION:SKIP EVEN NUMBERS

"""
 if (n <= 1)
        return false;

    // special case as 2 is the only even number that is prime
    else if (n == 2)
        return true;

    // Check if n is a multiple of 2 thus all these won't be prime
    else if (n % 2 == 0)
        return false;

    // If not, then just check the odds
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
            return false;
    }
    
""*/