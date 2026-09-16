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
    ListNode* removeElements(ListNode* head, int val) {


        if(head==nullptr)
           return head;
    
        ListNode *temp2=head;
        ListNode *prev=NULL;
        while(temp2!=nullptr)
        {
            ListNode *temp1=temp2;
            if(temp1->val==val&&temp1==head)
            {
                head=head->next;
                delete temp1;
                temp2=head;
                prev=NULL;

                continue;
            }
            if(temp1->val==val)
            {
              prev->next=temp1->next;
              temp2=temp1->next;
              delete temp1;
              continue;
            }
            prev=temp2;
            temp2=temp2->next;

        }
        return head;
    }
};