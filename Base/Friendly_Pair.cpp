// a pair is friendly if sum of divisors of n1/n1== sum of divisors of n2/n2
#include<bits/stdc++.h>
using namespace std;
int SumofDivisors(int n)
{
    int sum=0;
    //28 {28,14,7,2,4,1}  //not to consider 28 itself while summing
    //we iterate through 1 to sqrt of 28 ie 5// and try to find pairs of divirs(2,14)(14,2)(7,4)(4,7)(1,28)...//is considered one only
    for(int i=1;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(i==1)
            {
                sum=sum+i;
            }
            else if(n/i == i)
            {
                sum=sum+i;
            }
            else
            {
                sum=sum+i+n/i;
            }

        }

    }
    return sum;

}
int main()
{
    int num1,num2;
    cin>>num1>>num2;

    int sum1=SumofDivisors(num1)/num1;
    int sum2=SumofDivisors(num2)/num2;
    if(sum1==sum2)
    {
        cout<<"friendly pair"<<endl;
    }
    else
    {
        cout<<" not a friendly pair"<<endl;
    }


}