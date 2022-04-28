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
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode f(100);
        ListNode* last=&f;
        while(list1!=NULL && list2!=NULL)
        {
                if(list1->val<list2->val)
                {
                        last->next=list1;
                        last=list1;
                        list1=list1->next;
                }
                else
                {
                        last->next=list2;
                        last=list2;
                        list2=list2->next;
                }
        }

        if(list1)
                last->next=list1;
        if(list2)
                last->next=list2;
        return f.next;
}
};
