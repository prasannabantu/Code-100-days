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
ListNode* sortList(ListNode* head) {
        vector<int> v;
        ListNode* l=head;
        while(l)
        {
                v.push_back(l->val); l=l->next;
        }
        l=head;
        sort(v.begin(),v.end());
        for(int i=0; i<v.size(); i++)
        {
                l->val=v[i];
                l=l->next;
        }
        return head;
}
};
