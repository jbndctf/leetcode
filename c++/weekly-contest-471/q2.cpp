#include <map>
#include <iostream>
using namespace std;

bool isBalanced(map<char, int> freqs) {
    int oldFreq = 0;
    for (const auto& pair : freqs) {
        if (oldFreq == 0) {
            oldFreq = pair.second;
        }
        if (pair.second != oldFreq) {
            return false;
        } 
    }
    return true;
}

int longestBalanced(string s) {
    int longestLength = 0;
    for (int i = 0; i < s.length(); i++) {
        map<char, int> freqs;
        int currentLength = 0;
        for (int j = i; j < s.length(); j++) {
            currentLength++;
            freqs[s.at(j)]++;
            if (isBalanced(freqs) && currentLength > longestLength) {
                longestLength = currentLength;
            }
        }
    }
    return longestLength;
}

int main() {
    cout << longestBalanced("aba") << endl;
    return 0;
}
