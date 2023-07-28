// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit.
//  Add the two numbers and return the sum as a linked list.
// l1 = [2,4,3], l2 = [5,6,4]
// Output: [7,0,8]
// Explanation: 342 + 465 = 807.
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dumm=new ListNode();
        ListNode* temp= dumm;

        int carry=0;
        while(l1!=NULL || l2 !=NULL || carry)  //check if list is empty and carry hasnt reached 0;
        {
            int sum=0;
            if(l1!=NULL)
            {
                sum=sum+l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                sum=sum+l2->val;
                l2=l2->next;
            }

            sum=sum+carry;
            carry=carry /10;
            ListNode* newNode= new ListNode(sum % 10);
            temp->next= newNode;
            temp=temp->next;
            

        }

        return dumm->next;
    }
};