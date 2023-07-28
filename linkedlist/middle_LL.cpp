// findingg the middle of linkedlist and returning the list after it
// Input: head = [1,2,3,4,5]
// Output: [3,4,5]
// Explanation: The middle node of the list is node 3.

code:

    ListNode* middleNode(ListNode* head) {

        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
        
    }


//     intuition:
//     While slow moves one step forward, fast moves two steps forward.
// Finally, when fast reaches the end, slow happens to be in the middle of the linked list.
// For example, head = [1, 2, 3, 4, 5], I bolded the slow and fast in the list.
// step 0: slow: [1, 2, 3, 4, 5], fast: [1, 2, 3, 4, 5]
// step 1: slow: [1, 2, 3, 4, 5], fast: [1, 2, 3, 4, 5]
// step 2: slow: [1, 2, 3, 4, 5], fast: [1, 2, 3, 4, 5]
// end because fast cannot move forward anymore and return [3, 4, 5]