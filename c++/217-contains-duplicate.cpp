#include <set>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> repeated;
        for (int i = 0; i < nums.size(); i++) {
            if (repeated.contains(nums.at(i))) {
                return true;
            }
            repeated.insert(nums.at(i));
        }
        return false;
    }
};
