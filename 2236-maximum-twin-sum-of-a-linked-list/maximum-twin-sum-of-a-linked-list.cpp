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
    int pairSum(ListNode* head) {

        
        if(head->next->next==nullptr)
        {
            return (head->val)+(head->next->val);
        }
        int max=0;
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
        st.push(slow->val);
        
        slow=slow->next;
        while(slow)
        {
            int sum=slow->val+st.top();
            if(sum>max)
            {
                max=sum;
            }
            slow=slow->next;
            st.pop();

        }
        return max;
        
    }
};