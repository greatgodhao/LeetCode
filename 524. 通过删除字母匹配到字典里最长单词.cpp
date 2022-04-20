/*
524. 通过删除字母匹配到字典里最长单词
给你一个字符串 s 和一个字符串数组 dictionary ，找出并返回 dictionary 中最长的字符串，该字符串可以通过删除 s 中的某些字符得到。
如果答案不止一个，返回长度最长且字母序最小的字符串。如果答案不存在，则返回空字符串。
输入：s = "abpcplea", dictionary = ["ale","apple","monkey","plea"]
输出："apple"
输入：s = "abpcplea", dictionary = ["a","b","c"]
输出："a"
*/

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
