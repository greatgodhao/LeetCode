class Solution {
public:
    vector<string> v{"000", "111", "222", "333", "444", "555", "666", "777", "888", "999"};
    string largestGoodInteger(string num) {
        string ans = "";
        for(int i = v.size() - 1; i >= 0; i--)
        {
            if(strstr(num.c_str(), v[i].c_str()))
            {
                ans += v[i];
                return ans;
            }
        }
        return ans;
    }
};
