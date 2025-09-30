#include <set>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for (string str : strs) {
            while (str.find(prefix) != 0) {
                prefix.pop_back();
                if (prefix.empty()) {
                    return "";
                }
            }
        }
        return prefix;
    }
};
