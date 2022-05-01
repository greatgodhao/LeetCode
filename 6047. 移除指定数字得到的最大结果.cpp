class Solution {
public:
    string removeDigit(string s, char digit) {
        // string s;
        int n = s.size();
        unordered_map<int, int> mp;
        vector<string> ans;
        
        for(int i = 0; i < n; i++) {
            mp[s[i]]++;
        }
        for(int i = 0; i < n; i++) {
            
            if(s[i] == digit) {
                string ss = s;
                string::iterator itr = ss.begin();
                itr += i;
                ss.erase(itr);
                ans.push_back(ss);
                cout << ss << ' ';
            }
        }
        string res = "";
        for(int i = 0; i < ans.size(); i++) {
            res = max(res, ans[i]);
        }
        return res;
    }
};
