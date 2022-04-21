LC1290 Convert Binary Number in a Linked List to Integer
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
int getDecimalValue(ListNode* head) {
        int sum=0;
        int pre=1;
        ListNode *t=head;
        vector<int>ans;
        while(t!=NULL)
        {
                ans.push_back(t->val);
                t=t->next;
        }

        int n=ans.size();
        for(int i=n-1; i>=0; i--)
        {
                sum+=(ans[i])*pre;
                pre*=2;
        }
        return sum;
}
};

int getDecimalValue(ListNode* head) {
        ListNode* t=head;
        int ans=0;
        while(t!=NULL)
        {
                ans=(ans<<1)|t->val;
                t=t->next;
        }
        return ans;
}
