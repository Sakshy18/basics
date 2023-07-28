 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        

        // if(!list1 && !list2 ) return NULL;    
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        if(list1->val > list2->val ) swap(list1,list2);   //we have to take smaller head in list1 and assign result to it
         ListNode* result=list1;
        while(list1!=NULL && list2 !=NULL)  //jaisehi one of them hits null other one is already sorted;
        {
            ListNode* temp=NULL;    //to store the node jiska link we have to change when we find a biggr node
            while(list1!=NULL &&    list1->val <= list2->val)  
            {
                temp=list1;   //temp and l1 always has chota node value
                list1=list1->next;
            }

            temp->next=list2;  //bada value mila to we change link and swap l1 and l2 to again make l1 as chota
            swap(list1,list2);

        }
        return result;
 };


 code:(recuursive solution)
 // if(!list1 && !list2 ) return NULL;    
 // if(list1==NULL) return list2;
// if(list2==NULL) return list1;
 // if(list1->val < list2->val) 
        // {
        //     list1->next= mergeTwoLists(list1->next, list2);
        //     return list1;
        // }

        // else {
        //     list2->next= mergeTwoLists(list1, list2->next);
        //     return list2;
        // }