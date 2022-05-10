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
ListNode* rotateRight(ListNode* head, int k) {
        vector<ListNode*>v;
        ListNode* h=head;
        if(h==NULL) return h;
        while(h)
        {
                v.push_back(h);
                h=h->next;
        }
        if(v.size()==1) return head;
        k=k%(v.size());

        reverse(v.begin(),v.end());
        reverse(v.begin(),v.begin()+k);
        reverse(v.begin()+k,v.end());
        h=v[0];
        for(int i=1; i<v.size(); i++)
        {
                h->next=v[i];
                h=h->next;
        }
        h->next=NULL;
        return v[0];


}
};
