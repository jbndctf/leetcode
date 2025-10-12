#include <map>
#include <iostream>
using namespace std;

int longestBalanced(string s) {
    int longestLength = 0;
    for (int i = 0; i < s.length(); i++) {
        unordered_map<char, int> freqs;
        int length = 0;
        for (int j = i; j < s.length(); j++) {
            length++;
            freqs[s.at(j)]++;
            bool isBalanced = true;
            int prevFreq = -1;
            for (const auto& pair : freqs) {
                char c = pair.first;
                int freq = pair.second;
                if (prevFreq == -1) {
                    prevFreq = freq;
                }
                if (freq != prevFreq) {
                    isBalanced = false;
                }
            }
            if (isBalanced) {
                if (length > longestLength) {
                    longestLength = length;
                }
            }
        }
    }
    return longestLength;
}

int main() {
    cout << longestBalanced("aba") << endl;
    return 0;
}
