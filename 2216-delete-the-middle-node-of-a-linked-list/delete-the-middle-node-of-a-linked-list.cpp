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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *temp=head;
        ListNode *prev=nullptr;
        
        if(head->next==nullptr)
        {
            return nullptr;
        }
        int n=1;
        while(temp->next)
        {
            n++;
            temp=temp->next;
        }
        temp=head;

        int middle=n-(n-1)/2;
        for(int i=2;i<=middle;i++)
        {
            prev=temp;
            temp=temp->next;
            if(temp->next==nullptr)
             break;
        }
        prev->next=temp->next;

        return head;
    }
};