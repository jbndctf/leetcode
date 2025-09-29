#include <iostream>
using namespace std;

bool isPalindrome(int x) {
  if (x < 0) {
    return false;
  }
  int div = x;
  int length = 0;
  while (div != 0) {
    length++;
    div = div / 10;
  }
  int startDividend = x;
  for (int i = 0; i < length / 2; i++) {
    int endDividend = x;
    for (int j = 1; j < length - i; j++) {
      endDividend = endDividend / 10;
    }
    if (startDividend % 10 != endDividend % 10) {
      return false;
    }
    startDividend = startDividend / 10;
  }
  return true;
}

int main() {
  int x = 121;
  if (isPalindrome(x)) {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }
}

