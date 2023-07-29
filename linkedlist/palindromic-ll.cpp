Input: head = [1,2,2,1]
Output: true

class Solution {
public:
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
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next !=NULL && fast->next->next !=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverseList(slow->next);
        ListNode* start=head;
        ListNode* middle=slow->next;

        while(middle !=NULL)
        {
            if(start->val != middle-> val)  return false;
            middle=middle->next;
            start=start->next;
        }
   reverseList(slow->next);     
return true;   
    }
};

// approach:
// firstly find the element before middle 12321 me we  know mid is 3 sowe will find 2 that will be our slow pointer
// so to find middle we used the first while loop
// once we get mid we reverse list from slow->next which is mid itself
// then we keep start at head and mid at middle nd compare if equal if not equal return flase if equal check until mid hits null ie end
