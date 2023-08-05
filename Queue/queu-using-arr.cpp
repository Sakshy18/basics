// C++ program to implement queue using array
#include <iostream>
using namespace std;
// declaring the array of maximum capacity
int ar[10];
int n = 10;
// declaring front and rear and initializing both with -1
int front = - 1;
int rear = - 1;
//function to perform enqueue operation
void enqueue(int item) {
    // checking overflow condition
    if (rear == n - 1){
        cout<<"Overflow!"<<endl;
        return;
    }
    else {
        // front and rear both are at -1 then 
        // set front and rear at 0 otherwise increment rear
        if (front == - 1 && rear==-1){
            front = 0;
            rear=0;
        }
        else{
            rear++;
        }
        //inserting element at rear
        ar[rear] = item;
        cout<<"Element inserted"<<endl;
    }
}
//function to implement dequeue operation
void dequeue() {
    //checking underflow condition
    if (front == - 1 || front > rear) {
        cout<<"Underflow!";
        return ;
    }
    else {
        int item=ar[front];
        //displaying deleted element
        cout<<"Element deleted from queue is : "<< item <<endl;
        // if front and rear reach at end then initialize it at -1
        if(front == rear)  {  
            front = -1;  
            rear = -1;  
        }
        else{
            //incrementing the front
            front++;
        }
   }
}
//function to display all elements of queue
void display() {
    //checking whether queue is empty or not
    if (front == - 1){
        //if queue is empty simply return
        cout<<"Queue is empty"<<endl;
        return;
    }
    else {
        // if queue is not empty print all the elements from rear to front
        cout<<"Elements are : ";
        for (int i = front; i <= rear; i++)
            cout<<ar[i]<<" ";
        cout<<endl;
   }
}
//function to display front element of queue
void fronte() {
    //checking whether queue is empty or not
    if (front == - 1){
        //if queue is empty simply return
        cout<<"Queue is empty"<<endl;
        return;
    }
    else {
        // if queue is not empty print front element
        cout<<"Front Element is :"<<ar[front]<<endl;
   }
}
//driver code
int main() {
    int ch;
    //displaying options of enqueue, dequeue, front, display to the user
    cout<<"1: Inserting element to queue(enqueue)"<<endl;
    cout<<"2: Deleting element from queue(dequeue)"<<endl;
    cout<<"3: Display front element of queue"<<endl;
    cout<<"4: Display all the elements of queue"<<endl;
    cout<<"5: Exit"<<endl;
    do {
        //taking user choice 
        cout<<"Enter your choice : "<<endl;
        cin>>ch;
        switch (ch) {
            //calling functions according to the choice of user
            case 1: {
                cout<<"enter element to be inserted:"<<endl;
                int item;
                cin>>item;
                enqueue(item);
                break;
            }
            case 2: dequeue();
                break;
            case 3: display();
                break;
            case 4: fronte();
                break;
            case 5: cout<<"Exit"<<endl;
                break;
            default: cout<<"Invalid choice"<<endl;
        }
    } while(ch!=5);
    return 0;
}
