class Solution {
public:
bool isPalindrome(ListNode* head) {
        vector<int>ans;
        ListNode* t=head;
        while(t)
        {
                ans.push_back(t->val);
                t=t->next;
        }
        int n=ans.size();
        for(int i=0; i<n/2; i++)
                if(ans[i]!=ans[n-1-i]) return 0;
        return 1;
}
};
