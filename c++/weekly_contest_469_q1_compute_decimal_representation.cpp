#include <vector>
using namespace std;
class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> decimal;
        int div = n;
        long mul = 1;
        while (div != 0) {
            int rem = div % 10;
            if (rem != 0) {
                decimal.insert(decimal.begin(), rem * mul);
            }
            div = div / 10;
            mul = mul * 10;
        }
        return decimal;
    }
};
