class Solution {
public:
    bool isPalindrome(string s) {
        string clean_string;
        for (char c : s) {
            if (isalnum(c))
                clean_string += tolower(c);
        }
        s = clean_string;
        for (int i = 0; i < s.size() / 2; i++) {
            if (s[i] != s[s.size() - (i + 1)]) {
                return false;
            }
        }
        return true;
    }
};
