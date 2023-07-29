//deleting node only when node ka value is given:
// Input: head = [4,5,1,9], node = 5
// output=[4,1,9]
code:
void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;
    }

    // approach:
    // we copy value of element after node to element
    // now we change link of node ka next to node ke next ka next ie to 3rd element;