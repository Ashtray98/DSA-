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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode *temp=head;
        int n1=0;
        while(temp)
        {
            n1++;
            temp=temp->next;
        }
        temp=head;
        ListNode *prev=nullptr;
        for(int i=1;i<=n1;i++)
        {
           if(i==n1-n+1&&i==1)
           {
            head=head->next; 
            return head;
           }
           if(i==n1-n+1)
           {
            prev->next=temp->next;
            return head;
           }
           prev=temp;
           temp=temp->next;
        }
        return head;

        
    }
};