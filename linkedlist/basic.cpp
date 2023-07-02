#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node * next;

    node(int val)

    {
        data=val;
        next= NULL;
    }




};

    void insertTail(node * &head, int val)
    {
        node * n=new node(val);
        if(head==NULL)
        {
            head=n;
            return;
        }
        node * temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=n;
    }

     void insertHead(node * &head, int val)
    {
        node * n=new node(val);
        if(head==NULL)
        {
            head=n;
            return;
        }
        n->next=head; //n pointing to head ka data
        head=n;  //head pointer is at n now 
    }

    bool Search(node *head, int key)
    {
        
        node * temp=head;
        while(temp!=NULL){
        if(temp->data== key)
        {
            return true;
        }
        temp=temp->next;
        }
        return false;
       
    }

    void deleteatHead(node * &head)
    {
        node * temp=head;
        head=head->next;
        delete temp;
    }
    void deleteMiddle(node * &head, int val)  //works for tail too
    {
        //val is jis noe ko delete karna uska value
        node * temp=head;
        node * todelete = new node(val);
        if(head==NULL)
        {
            return;
        }
        if(head->next==NULL)
        {
            deleteatHead(head);
            return;
        }

        while(temp->next->data!=val)
        {
            temp=temp->next;
        }
        todelete=temp->next;
        temp->next=temp->next->next;

        delete todelete;


    }

    node* reverse(node * &head)  //iterative
    {
        // 4->3->2->1->NULL
        node * prev=NULL;
        node * curr=head;
        node * nxt;

        while(curr!=NULL)
        {
            nxt=curr->next;
            curr->next=prev;

            prev=curr;
            curr=nxt;
        }
        return prev;

    }
    node* rreverse(node * &head) //recursive
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }

        node * newhead=rreverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return newhead;
    }



    void Display(node * head)
    {
        node * temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
        cout<<endl;

    }
int main()
{

node * head=NULL;
insertTail(head,1);
insertTail(head,2);
insertTail(head,3);
insertTail(head,12);
insertTail(head,10);
// Display(head);
insertHead(head,5);
insertHead(head,7);
Display(head);
// cout<<Search(head, 8)<<endl;
// cout<<Search(head, 2)<<endl;
// deleteatHead(head);
// deleteMiddle(head,10);
node * newhead=rreverse(head);

Display(newhead);

}