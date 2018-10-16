#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool checkDigits(int n) {
  int result = 1;
  int tmp = n % 10;
  while (n > 0) {
    if (tmp != n % 10) {
      result = 0;
      break;
    }
    n /= 10;
  }
  return result;
}

int main() {
  int N, ans;
  cin >> N;
  for (int i = N; i < 1000; i++) {
    if (checkDigits(i)) {
      ans = i;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
