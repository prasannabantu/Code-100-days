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
        if(head==NULL) return head;
        ListNode* t=head;
        stack<ListNode*>st;
        while(t)
        {
                st.push(t);
                t=t->next;
        }
        head=st.top();
        t=head;
        while(!st.empty())
        {
                t->next=st.top();
                st.pop();
                t=t->next;
        }
        t->next=NULL;



        return head;
}
};
