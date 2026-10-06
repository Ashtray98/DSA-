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
    ListNode* removeNodes(ListNode* head) {

        stack <int> st;
        ListNode *temp2=head;
        while(temp2)
        {
            st.push(temp2->val);
            temp2=temp2->next;
        }
        head->val=st.top();
        st.pop();
        head->next=nullptr;
        temp2=head;

        while(!st.empty())
        {
            if(st.top()<temp2->val)
            {
                st.pop();
            }
            else
            {   
                ListNode *temp=new ListNode(st.top());
                temp2->next=temp;
                temp2=temp2->next;
                st.pop();
            }
        }
        ListNode *prev=nullptr;
        temp2=head;

        while(temp2!=nullptr)
        {
            ListNode *temp=temp2;
            temp2=temp2->next;
            temp->next=prev;
            prev=temp;
        }

        return prev;
        
        
    }
};