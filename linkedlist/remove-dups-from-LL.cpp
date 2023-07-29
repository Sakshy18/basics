// Input: head = [1,1,2]
// Output: [1,2]

ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head ->next==NULL)
        {
            return head;
        }
        ListNode* temp=deleteDuplicates(head->next);
        if(temp->val==head->val)
        {
            return temp;
        }
        else
        {
            head->next=temp;
            return head;
        }
    
    }

    // aprroach:
    // take head ->mnext and reverse agey ka linnkedlist tilln u hit null
    // then check first head with newhead if equal then just return newlist ie duplicate wala toh already jayega
    // else we link head and head->next and return head original wala
