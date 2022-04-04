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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* h1=head;
        ListNode* f=head; ListNode* s=head;
        int c=1;
        while(c<k)
        {
            h1=h1->next;
            c++;
        }
        //cout<<h1->val<<" "<<"\n";

        c=0;
        while(c<k)
        {
            f=f->next;
            c++;
        }

        while(f!=NULL)
        {
            f=f->next;
            s=s->next;
        }
       // cout<<s->val<<" ";

        int temp;
        temp=h1->val;
        h1->val=s->val;
        s->val=temp;
        return head;

    }
};
