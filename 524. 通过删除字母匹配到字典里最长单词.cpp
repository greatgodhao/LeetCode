class Solution {
    bool check(const string& s, const string& d) {
        int i = 0, j = 0;
        while(i < s.size() && j < d.size()) {
            if(s[i] == d[j]) {
                i++, j++;
            }
            else {
                i++;
            }
        }
        return j == d.size();
    }
public:
    string findLongestWord(string s, vector<string>& d) {
        sort(d.begin(), d.end(), [&](const string& a, const string& b) {
            if(a.size() == b.size()) {
                return a < b;
            }
            return a.size() > b.size();
        });
        for(int i = 0;i < d.size();i++) {
            if(check(s, d[i])) {
                return d[i];
            }
        }
        return "";
    }
};
