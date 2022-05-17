class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int v[128] = {0};
        for(int i = 0; i < order.size(); i++) {
            v[order[i]] = i; 
        }
        vector<string> wd;
        for(auto& w : words) {
            string s = "";
            for(auto& a : w) {
                s += v[a];
            }
            wd.push_back(s);
        }
        vector<string> wds = wd;
        sort(wd.begin(), wd.end());
        if(wd != wds) {
            return false;
        }
        return true;
    }
};
