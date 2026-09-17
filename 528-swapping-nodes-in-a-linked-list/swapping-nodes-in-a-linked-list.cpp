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
    ListNode* swapNodes(ListNode* head, int k) {

    
        ListNode *slow=head;
        ListNode *fast=head;
        ListNode *temp2=head;
        for(int i=1;i<k;i++)
            fast=fast->next;

        temp2=fast;

        while(fast->next!=nullptr)
        {
            fast=fast->next;
            slow=slow->next;
        }

        int value=slow->val;
        slow->val=temp2->val;
        temp2->val=value;

        return head;
    }
};
