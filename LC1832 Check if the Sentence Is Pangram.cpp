//LC1832 Check if the Sentence Is Pangram
class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>a(26,0);
        for(auto i:sentence)
        {
            a[i-'a']++;
        }
        for(auto i:a)
            if(i==0) return 0;
        return 1;
    }
};
