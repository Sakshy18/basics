//basic functions of doubly linked list
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node * prev;
    //constructor;
    Node(int val)
    {
        this->data=val;
       this->next=NULL;
        this->prev=NULL;
    }
    ~Node()
    {
        int val=this->data;
        if(next!=NULL)
        {
            delete next;
            next=NULL;

        }
        cout<<endl;
        cout<<"memory free"<<"->"<<val<<endl;
    }


};

void insertathead(Node *&head,int data)
{
    if(head==NULL)
    {
        Node* Insert = new Node(data); //make new node
        head=Insert; ///nayi node hi head hai

    }
    else{
    Node* Insert = new Node(data);
    Insert->next=head;
    head->prev=Insert;
    head=Insert;

    }
   
}

void insertatTail(Node *&tail,int data)
{
    if(tail==NULL)
    {
        Node* Insert = new Node(data); //make new node
        tail=Insert; ///nayi node hi head hai

    }
    else 
    {
    Node* Insert = new Node(data);
    tail->next=Insert;
    Insert->prev=tail;
    tail=Insert;
    }
}
void insertatpos(Node* &head, Node * &tail,int data,int position)
{
    //ie insert at head
    if(position==1)
    {
        insertathead(head,data);
        return;

    }

    Node * temp=head;
    int count=1;
    while(count<position-1)
    {
        temp=temp->next;
        count++;
    }


    //insert at tail
    if(temp->next==NULL)
    {
        insertatTail(tail,data);
        return;
    }
    Node* insertnode = new Node(data);
    temp->next->prev=insertnode;
    insertnode->next=temp->next;
    insertnode->prev=temp;
    temp->next=insertnode;

}

int getlength(Node * head)
{
    int len=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}

void deleteathead(Node *&head)
{
    Node* temp=head;
    temp->next->prev=NULL;
    head=temp->next;
    temp->next=NULL;

    delete temp;
}

void deletenode(int pos, Node * &head)
{
    Node * temp=head;
    int count=1;
    while(count<pos)
    {
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    temp->next=NULL;
    temp->prev=NULL;
    delete temp;


}

void deleteattail(Node* &head)
{
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->prev->next=NULL;
    delete temp;


}

void display(Node *head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    Node * node1=new Node(10);
    Node * head= node1; //yaha head isnt null linked list isnt empty. par it can be empty if head is null 
    Node * tail= node1;//same for tail ==null
    // display(head);
    insertatpos(head,tail, 2,1);
    insertathead(head,5);
    insertathead(head,12);
    insertatTail(tail,25);
    display(head);
    cout<<endl;
    insertatpos(head,tail,30,3);
    display(head);
    cout<<endl;
    deleteattail(head);
    // deletenode(6,head);
    display(head);
    
    
}