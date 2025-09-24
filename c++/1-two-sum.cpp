#include <map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      map<int, int> complement;
      for (int i = 0; i < nums.size(); i++) {
        if (complement.contains(target - nums.at(i))) {
          return {i, complement.at(target - nums.at(i))};
        }
        complement.insert({nums.at(i), i});
      }
      return {};
    }
};
