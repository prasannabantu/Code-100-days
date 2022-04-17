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
int pairSum(ListNode* head) {
        vector<int>res;
        ListNode* t=head;
        while(t!=NULL)
        {
                res.push_back(t->val);
                t=t->next;
        }
        int maxii=0;
        int n=res.size();
        for(int i=0; i<n/2; i++)
        {
                maxii=max(res[i]+res[n-i-1],maxii);
        }
        return maxii;
}
};
