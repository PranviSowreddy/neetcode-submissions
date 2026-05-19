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
    ListNode* reverseList(ListNode* temp)
    {
        ListNode* prev=nullptr;
        ListNode* curr=temp;

        while(curr)
        {
            ListNode* new_node=curr->next;
            curr->next=prev;
            prev=curr;
            curr=new_node;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        //split linked list into two halves
        if(!head || !head->next)
        return;
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast && fast->next)
        {
            fast=fast->next->next;
            slow=slow->next; 
        }

        ListNode* list1=head;
        ListNode* list2=reverseList(slow->next);
        slow->next=nullptr;

      
        while(list1 && list2)
        {
            ListNode* tmp1=list1->next;
            ListNode* tmp2=list2->next;

            list1->next=list2;
            list2->next=tmp1;

            list1=tmp1;
            list2=tmp2;
        }
   
    }
};
