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
    ListNode* mergeTwo(ListNode* head1,ListNode* head2)
    {
        ListNode* dummy=new ListNode();
        ListNode* temp=dummy;

        while(head1 && head2)
        {
            if(head1->val<=head2->val)
            {
                temp->next=head1;
                head1=head1->next;
            }
            else
            {
                temp->next=head2;
                head2=head2->next;
            }
            temp=temp->next;
        }

        if(head1)
        {
            temp->next=head1;
        }
        else
        {
            temp->next=head2;
        }
        return dummy->next;

    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty())
        return nullptr;

        for(int i=1;i<lists.size();i*=2)
        {
            for(int j=0;i+j<lists.size();j+=i*2)
            {
                lists[j]=mergeTwo(lists[j],lists[j+i]);
            }
        }
        return lists[0];
    }
    
};
