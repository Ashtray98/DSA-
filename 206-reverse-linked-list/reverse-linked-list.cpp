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
    ListNode* reverseList(ListNode* head) {
        stack <int> st;
        ListNode *temp=head;
        if(!head)
          return nullptr;
        while(temp)
        {
            st.push(temp->val);
            temp=temp->next;
        }
        head->val=st.top();
        st.pop();
        temp=head;
        while(!st.empty())
        {
            temp->next->val=st.top();
            st.pop();
            temp=temp->next;
        }
        return head;

    }
};