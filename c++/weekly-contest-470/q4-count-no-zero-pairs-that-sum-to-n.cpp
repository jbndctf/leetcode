#include <iostream>
using namespace std;

bool containsZero(long long n) {
  if (n == 0) {
    return true;
  }
  int div = n;
  while (div != 0) {
    if (div % 10 == 0) {
      return true;
    }
    div = div / 10;
  }
  return false;
}

long long countNoZeroPairs(long long n) {
  int count = 0;
  for (int i = 1; i <= n; i++) {
    int j = n - i;
    if (!containsZero(i) && !containsZero(j)) {
      count++;
    }
  }
  return count;
}
int main() {
  cout << countNoZeroPairs(3);
}
