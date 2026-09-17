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
    ListNode* middleNode(ListNode* head) {
        
        ListNode* slow=head;
        ListNode* fast=head;
        int n=0;
        while(fast!=nullptr)
        {
            n++;
            fast=fast->next;
        }
        int middle=n-(n-1)/2;
        for(int i=2;i<=middle;i++)
        {
            slow=slow->next;
        }

        return slow;

    }
};