class Solution {
public:
    long long splitArray(vector<int>& nums) {
        long long left_sum = 0;
        long long right_sum = 0;
        int prev = 0;
        int split = -1;
        for (int cur : nums) {
            if (split == -1) {
                left_sum += prev;
                if (prev > cur) {
                    split = prev;
                    right_sum = cur;
                }
            } else {
                right_sum += cur;
                if (prev <= cur) {
                    return -1;
                }
            }
            prev = cur;
        }
        if (nums.size() == 2) {
            left_sum = nums.at(0);
            right_sum = nums.at(1);
            split = 0;
        } else if (split == -1) {
            return -1;
        }
        long long output = abs(left_sum - right_sum);
        if (abs(left_sum - split - (right_sum + split)) < output) {
            output = abs(left_sum - split - (right_sum + split));
        }
        return output;
    }
};
