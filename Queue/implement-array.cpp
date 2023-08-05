//implementing queue using array

#include<bits/stdc++.h>
using namespace std;
#define n 10

class queue
{

    
    int *arr;
    int front;
    int count;
    int rear;
    public:
    queue()
    {
         arr=new int[n];
         front=rear;
         count=0;

    }

    void pop()
    {
        if(count==0)
        {
            cout<<"queue is empty";
        }
        else
        {
        arr[front%n]=-1;

        front++;
        count--;}
    }

    void push(int x)
    {
        if(count==n)
        {
            cout<<"queue full";
        }
        else
        {
        arr[rear%n]=x;
        rear++;
        count++;

        }

       
    }

    int top()
    {
        if(count==0) return -1;

        else
        {
            return arr[front%n];
        }
    }
    
 
       
    void display()
    {
        if(count==0)
        {
            cout<<"queue is empty";
        }
        else{
        for (int i = front; i < rear-1; i++) 
        {
            cout<<arr[i%n]<<endl;
        }}
    return;
    }
};
int main()
{
    queue q1;
    q1.push(12);
    q1.push(20);
    q1.push(1);
    q1.push(5);
    q1.display();


}