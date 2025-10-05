#include <vector>
#include <iostream>
using namespace std;

/*
int longestSubsequence(vector<int>& nums) {
  int longestLength = 0;
  for (int i = 0; i < nums.size(); i++) {
    int res = 0;
    for (int j = i; j < nums.size(); j++) {
      int length = j - i + 1;
      res ^= nums[j];
      if (res != 0 && length > longestLength) {
        longestLength = length;
      }
    }
  }
  return longestLength;
}
*/

int main() {
  vector<int> nums;
  nums.push_back(2);
  nums.push_back(3);
  nums.push_back(4);
  cout << longestSubsequence(nums);
}
