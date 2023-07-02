#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//normal maps:keys sorted:implemented using red black trees,..maps arent stored at linear location:each element is a pair of key and value pair
//first and 2nd element are linked so it+1 cant be done hence it++ to be donee;

void print(map<int,string> & m)
{
    cout<<m.size()<<"size->"<<endl;
     for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}
int main()
{
    map<int,string> m;  //key valye
    m[1]="abc";   //tc:o(log(n))  for insertion
    m[5]="sak";
    m[3]="aks";
    m.insert({4,"xyz"});  //way of insertion
    map<int,string> ::iterator itr;
    for(itr=m.begin();itr!=m.end();++itr)
    {
        cout<<itr->first<<" & "<<itr->second;
        cout<<endl;
    }
    m.erase(3); //3 delete ho jayega erasse hoga key;
    auto it=m.find(3);  //pura key value pair of 3 gets deleted here;
    m.erase(it); //to key value delete hogi jo bhi it is pointing towardds;
    //map stored value in sorted order based on  keys.
//       //value nahi hai to m.end() dega
//    if(it==m.end())
//    {
//     cout<<"no value"<<endl;  //to find a  value in msp
//    }
//    else
//    {
//     cout<<it->first<<" "<<it->second;
//    }
   
   //print(m);
    m.clear();  //clears pura map;
}

//time complexeity of maps depedns on keys: as in red black tree dusre ke sath comaprison karke uska place decide hota hai so depdnsd on keys
