class Solution {
public:
    bool check(string& a, string& b) {
        int k = 0;
        for(auto c : b) {
            if(c == a[k] && k < a.size()) {
                k++;
            }
        }
        return k == a.size();
    }
    int findLUSlength(vector<string>& strs) {
        int res = -1;
        for(int i = 0;i < strs.size();i++) {
            bool isSub = false;
            for(int j = 0;j < strs.size();j++) {
                if(i != j && check(strs[i], strs[j])) {
                    isSub = true;
                    break;
                }
            }
            if(!isSub) {
                res = max(res, (int)strs[i].size());
            }
        }
        return res;
    }
};
