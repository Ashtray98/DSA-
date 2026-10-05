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
    bool isPalindrome(ListNode* head)
     {
        if(!head->next)
        {
            return true;
        }
        if(head->next->next==nullptr&&head->val==head->next->val)
        {
            return true;
        }
        ListNode *slow=head;
        ListNode *fast=head;
        fast=fast->next;
        
        stack <int> st;
    
        while(fast&&fast->next)
        {
            st.push(slow->val);
            fast=fast->next->next;
            slow=slow->next;

        }
        if(fast!=nullptr&&fast->next==nullptr)
         st.push(slow->val);
        
        slow=slow->next;
        while(slow)
        {
            if(slow->val!=st.top())
            {
                return false;
            }
            slow=slow->next;
            st.pop();

        }
        return true;
    
        
    }
};