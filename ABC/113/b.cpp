#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int N, T, A;

int main() {
  cin >> N >> T >> A;
  int H[N];
  double tmp = 1e9;
  int ans;
  for (int i = 0; i < N; ++i) cin >> H[i];

  for (int i = 0; i < N; ++i) {
    if (tmp > abs(A - (T - (H[i] * 0.006)))) {
      tmp = abs(A - (T - (H[i] * 0.006)));
      ans = i + 1;
    }
  }

  cout << ans << endl;
  return 0;
}
