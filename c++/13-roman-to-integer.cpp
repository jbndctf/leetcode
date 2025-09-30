class Solution {
public:
    int romanToInt(string s) {
        int decimal = 0;
        char previous = '0';
        for (int i = s.length() - 1; i >= 0; i--) {
            char c = s[i];
            if (c == 'I') {
                if (previous == 'V' || previous == 'X') {
                    decimal -= 1;
                } else {
                    decimal += 1;
                }
                previous = 'I';
            } else if (c == 'V') {
                decimal += 5;
                previous = 'V';
            } else if (c == 'X') {
                if (previous == 'L' || previous == 'C') {
                    decimal -= 10;
                } else {
                    decimal += 10;
                }
                previous = 'X';
            } else if (c == 'L') {
                decimal += 50;
                previous = 'L';
            } else if (c == 'C') {
                if (previous == 'D' || previous == 'M') {
                    decimal -= 100;
                } else {
                    decimal += 100;
                }
                previous = 'C';
            } else if (c == 'D') {
                decimal += 500;
                previous = 'D';
            } else if (c == 'M') {
                decimal += 1000;
                previous = 'M';
            }
        }
        return decimal;
    }
};
