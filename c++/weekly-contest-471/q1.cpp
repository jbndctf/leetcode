#include <iostream>
#include <vector>
#include <map>
using namespace std;
int sumDivisibleByK(vector<int>& nums, int k) {
    map<int, int> freqs;
    for (int num : nums) {
        freqs[num]++;
    }
    int sum = 0;
    for (const auto& pair : freqs) {
        if (pair.second % k == 0) {
            sum += pair.first * pair.second;
        }
    }
    return sum;
}

int main() {
    vector<int> nums = {1,2,2,3,3,3,3,4};
    int k = 2;
    int sum = sumDivisibleByK(nums, k);
    cout << sum << endl;
    return 0;
}
