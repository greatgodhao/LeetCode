class Solution {
public:
    string toGoatLatin(string sentence) {
        unordered_set<char> v = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        string ans;
        int cnt = 1;
        for(int i = 0;i < sentence.size();) {
            int j = i;
            while(j < sentence.size() && sentence[j] != ' ') {
                j++;
            }
            cnt++;
            if(cnt != 2) {
                ans += ' ';
            }
            if(v.count(sentence[i])) {
                ans += sentence.substr(i, j - i) + 'm' + string(cnt, 'a');
            }
            else {
                ans += sentence.substr(i + 1, j - i - 1) + sentence[i] + 'm' + string(cnt, 'a');
            }
            i = j + 1;
        }
        return ans;
    }
};
