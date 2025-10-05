#include <vector>
#include <iostream>
using namespace std;

int alternatingSum(vector<int>& nums) {
  int sum = 0;
  for (int i = 0; i < nums.size(); i++) {
    if (i % 2 == 0) {
      sum += nums[i];
    } else {
      sum -= nums[i];
    }
  }
  return sum;
}

int main() {
  vector<int> nums;
  nums.push_back(1);
  nums.push_back(3);
  nums.push_back(5);
  nums.push_back(7);
  cout << alternatingSum(nums);
  return 0;
}
