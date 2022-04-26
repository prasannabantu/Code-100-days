83. Remove Duplicates from Sorted List
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
ListNode* deleteDuplicates(ListNode* head) {
        ListNode* t=head;
        ListNode* r=head;
        while(t!=NULL)
        {
                r=t;
                while(r!=NULL && r->next!=NULL && r->val==r->next->val)
                {
                        r->next=r->next->next;
                }
                t=t->next;
        }
        return head;
}
};

ListNode* deleteDuplicates(ListNode* head) {
        ListNode* t=head;
        ListNode* r=head;
        while(r!=NULL)
        {
                while(r!=NULL && r->next!=NULL && r->val==r->next->val)
                {
                        r->next=r->next->next;
                }
                if(r!=NULL)
                        r=r->next;
        }
        return head;
}
