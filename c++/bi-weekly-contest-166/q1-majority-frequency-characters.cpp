#include <map>
#include <string>
using namespace std;
class Solution {
public:
    string majorityFrequencyGroup(string s) {
        map<char, int> frequency_table;
        for (char c : s) {
            frequency_table[c]++;
        }
        map<int, string> group_size_table;
        for (pair<const char, int> &p : frequency_table) {
            group_size_table[p.second].push_back(p.first);
        }
        string group;
        int largest_group_size = 0;
        int largest_group_size_frequency = 0;
        for (pair<const int, string> &p : group_size_table) {
            if (p.second.length() >= largest_group_size && p.first > largest_group_size_frequency) {
                largest_group_size_frequency = p.first;
                largest_group_size = p.second.length();
                group = p.second;
            }
        }
        return group;
    }
};
