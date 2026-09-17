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

        int n=0;
        ListNode *temp=head;
        ListNode *temp2=head;

        if(head->next==nullptr)
        {
            return head;
        }
       
        while(temp!=nullptr)
        {
            temp=temp->next;
            n++;
        }

        temp=head;

        for(int i=1;i<k;i++)
        {
            temp=temp->next;
        }
        for(int i=1;i<n-k+1;i++)
        {
            temp2=temp2->next;
        }

        int value=temp2->val;
        temp2->val=temp->val;
        temp->val=value;

        return head;
}
};