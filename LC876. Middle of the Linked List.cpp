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
    ListNode* middleNode(ListNode* head) {
        ListNode* f=head;
        ListNode* s=head;
        vector<int>ans;
        while(f->next!=NULL && f->next->next!=NULL)
        {
            f=f->next->next;
            s=s->next;
        }
        if(f->next==NULL) return s;
        return s->next;

    }
};
