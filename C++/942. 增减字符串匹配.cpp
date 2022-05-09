class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        vector<int> ans;
        int a = n, b = 0;
        for(auto i : s)
        {   
            if(i == 'I') ans.push_back(b++);
            else ans.push_back(a--);
        }
        ans.push_back(a);
        return ans;
    }
};
