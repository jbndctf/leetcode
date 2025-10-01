class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> groups;
        map<map<char, int>, vector<string>> freqs;
        for (string str : strs) {
            map<char, int> freq;
            for (char c : str) {
                freq[c]++;
            }
            freqs[freq].push_back(str);
        }
        for (const pair p : freqs) {
            groups.push_back(p.second);
        }
        return groups;
    }
};
