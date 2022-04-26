/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
bool hasCycle(ListNode *head) {
        ListNode* s=head;
        ListNode* f=head;
        if(s==NULL) return 0;
        while(s->next!=NULL && f->next!=NULL && f->next->next!=NULL)
        {
                s=s->next;
                f=f->next->next;
                if(s==f) return 1;
                if(s->next==NULL) return 0;
        }
        return 0;
}
};
