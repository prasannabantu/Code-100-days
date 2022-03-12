//1108. Defanging an IP Address

class Solution {
public:
    string defangIPaddr(string address) {
        string str;
        for(auto i:address)
            if(i=='.')
            {
                str.append("[.]");
            }
            else
                str.push_back(i);
        return str;
    }
};
