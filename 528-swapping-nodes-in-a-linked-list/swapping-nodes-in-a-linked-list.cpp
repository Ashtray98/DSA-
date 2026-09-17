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

        ListNode *temp=head;
        ListNode *temp2=head;

        for(int i=1;i<k;i++)
            temp=temp->next;

        ListNode *fast=temp;
        temp2=head;

        while(fast->next!=nullptr)
        {
            fast=fast->next;
            temp2=temp2->next;
        }

        int value=temp->val;
        temp->val=temp2->val;
        temp2->val=value;

        return head;
    }
};
