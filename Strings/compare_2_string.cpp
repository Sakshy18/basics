//compare 2 string nd tell if equal or not
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    if(!s2.compare(s1))   //string are equal when compare is 0 and 0 is false but if always gives true hence ! 
    //can also be written as s1.compare(s2)=0
    {
        cout<<"string equals"<<endl;
    }
    else
    {
        cout<<"string not equals"<<endl;
    }

}
