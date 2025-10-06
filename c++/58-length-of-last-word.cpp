class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.length() - 1;
        if (s[s.length() - 1] == ' ') {
            while (s[i] == ' ') {
                i--;
            }
        }
        for (; i >= 0; i--) {
            if (s[i] == ' ') {
                break;
            }
            length++;
        }
        return length;
    }
};
