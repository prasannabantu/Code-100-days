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
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* h;

        int carry=0;
        ListNode* head=new ListNode();
        h=head;

        while(l1!=NULL && l2!=NULL)
        {
                int sum=l1->val+l2->val+carry;
                carry=sum/10;
                h->next=new ListNode(sum % 10);
                l1=l1->next; l2=l2->next;
                h=h->next;
        }

        while(l1!=NULL)
        {
                int sum= l1->val+carry;
                carry=sum/10;
                h->next=new ListNode(sum % 10);
                l1=l1->next;
                h=h->next;
        }

        while(l2!=NULL)
        {
                int sum= l2->val+carry;
                carry=sum/10;
                h->next=new ListNode(sum % 10);
                l2=l2->next;
                h=h->next;
        }

        if(carry) {  h->next=new ListNode(carry);  h=h->next;}
        h->next=NULL;
        return head->next;




}
};
