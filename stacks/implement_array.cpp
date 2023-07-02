#include<iostream>
using namespace std;
#define n 50

class stack
{
    int* arr;
    int top;
    

    public:
    stack()
    {
        arr=new int[n];
        top=-1;
        
    }

    void push(int x)
    {
        if(top==n-1)
        {
            cout<<"stack is full"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"stack is empty"<<endl;
            return;
        }
        top--;
    }
    bool empty()
    {
         return (top < 0);
    }
    void print(stack s)
    {
        if(empty())
        {
            cout<<"stack is empty"<<endl;
            return;
        }
        while(!s.empty())
        {
            cout<<s.Top()<<" ";
            s.pop();
        }
    }
    int Top()
    {
        if(top==-1)
        {
            cout<<"array is empty"<<endl;
            return -1;
        }
       return arr[top];
    }
};
int main()
{
    stack st1;
    st1.push(2);
    st1.push(6);
    // cout<<st1.Top()<<endl;
    st1.push(1);
    // cout<<st1.Top()<<endl;
    st1.push(12);
    st1.push(10);
    st1.pop();
    // cout<<st1.Top()<<endl;
    st1.print(st1);
    // cout<<st1.Top();
    return 0;

}