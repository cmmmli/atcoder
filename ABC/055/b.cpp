#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
using namespace std;

int main() {
  int N;
  cin >> N;
  long long res = 1;
  int mod = 1e9 + 7;

  for (int i = 1; i <= N; ++i) {
    res *= i;
    res %= mod;
  }
  cout << res << endl;
  return 0;
}
