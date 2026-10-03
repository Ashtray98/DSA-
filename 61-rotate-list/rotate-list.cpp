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
    ListNode* rotateRight(ListNode* head, int k) {

        if(!head)
        return nullptr;
        if(!head->next)
        return head;

        int n=0;
        ListNode *temp=head;
        ListNode *prev=nullptr;
        while(temp)
        {
            prev=temp;
            temp=temp->next;
            n++;
        }
        if(k%n==0)
        {
            return head;
        }

        prev->next=head;
        temp=head;
       
        int c=k%n;

        for(int i=0;i<n-c;i++)
        {
            temp=temp->next;
            prev=prev->next;
            
        }
        prev->next=nullptr;
            return temp;
        
    }
};