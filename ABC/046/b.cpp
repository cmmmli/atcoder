#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  long long res = 0;

  res = K * pow(K - 1, N - 1);
  cout << res << endl;
  return 0;
}
