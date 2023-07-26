Given head, the head of a linked list, determine if the linked list has a cycle in it.
// There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.
// Input: head = [3,2,0,-4], pos = 1
// Output: true
public:
    bool hasCycle(ListNode *head) {
       ListNode *slow=head;
       ListNode *fast=head;

        while(slow && fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow) return true;
           
        }
        
return false;

//Time complexity: O(n), where n is the number of nodes in the linked list. In the worst case scenario, we will need to traverse the entire list to determine if there is a cycle.
// Space complexity: O(1),
// We use two pointers, rabbit and tortoise, which start from the head of the linked list.
// The rabbit moves twice as fast as the tortoise, i.e., it moves two nodes at a time while the tortoise moves one node at a time.
// If there is no cycle in the linked list, the rabbit will reach the end of the list, i.e., 
// it will become NULL, and we can return false. However, if there is a cycle, the rabbit will eventually catch up with the tortoise, and both pointers will point to the same node.
// We return true in this case.