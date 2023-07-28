// Input: head = [1,2,3,4,5]
// Output: [5,4,3,2,1]

code: approach 1. Iterative
 ListNode* reverseList(ListNode* head) {
        if(head==NULL)
        {
            return NULL;
        }
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* n=head->next;

        while(curr!=NULL)
        {
            curr->next=prev;
            prev=curr;
            curr=n;

            if(n!=NULL)
            {
                n=n->next;
            }
        }

        return prev;
    }
Code: Approach 2: Recursive
ListNode* reversefun(ListNode* head) {

 if(head->next ==NULL || head==NULL)
     {
         return head;
     }
     ListNode* newhead= reversefun(head->next);   //to reverse the whole linked list apart from head
     head->next->next=head; //reversing head ka link ie between head and next node
     head->next=NULL;  //making head point to null

     return newhead;
        
    }

    
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
     {
         return head;
     }
       return reversefun(head);
        
    }
    // intuition:
    // 1.iterative solution:
    // 2.we make 3 pointers in which curr stores head n stores curr ka next and prev stores curr ka prev
    // we go on ti;; current doesnt hit null, but to make a valid check we ensure n isnt null
    // also base case is head shouldnt be null
    // we just take current ka next linke and make it point to prev and then increment all three nodes by 1 unit.
