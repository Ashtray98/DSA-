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
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(!head->next)
        {
            return head;
        }


        ListNode* curr=head;
        ListNode *prev=nullptr;
        ListNode* prev2=nullptr;

        for(int i=0;i<left;i++)
        {
            prev2=prev;
            prev=curr;
            curr=curr->next;
        }
        if(!prev2)
        {
            prev2=prev;
        }
      
        for(int i=0;i<right-left;i++)
        {
                ListNode *temp=curr;
                curr=curr->next;
                temp->next=prev;
                prev=temp;
            }
        
        if(left==1)
        {
            prev2->next=curr;
            return prev;
        }
        else
        {
            prev2->next->next=curr;
            prev2->next=prev;
            return head;

        }
    
        return head;



      
        
    }
};