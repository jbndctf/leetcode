#include <set>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int j = 0;
        int substring_length = 0;
        int longest_length = 0;
        set<char> substring;
        while (j < s.length()) {
            if (!substring.contains(s.at(j))) {
                substring.insert(s.at(j));
                j++;
                substring_length++;
                if (substring_length > longest_length) {
                    longest_length = substring_length;
                }
            } else {
                substring.erase(s.at(i));
                i++;
                substring_length--;
            }
        }
        return longest_length;
    }
};
