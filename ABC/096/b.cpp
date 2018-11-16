#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
#include <map>
#include <ctype.h>
using namespace std;

typedef long long ll;

int dx[4] = { 0, -1, 1, 0 };
int dy[4] = { -1, 0, 0, 1 };

int main() {
  int a, b, c, k;
  cin >> a >> b >> c >> k;
  int maxval = max(a, max(b, c));
  int res = a + b + c - maxval;
  for (int i = 0; i < k; ++i) {
    maxval *= 2;
  }
  res += maxval;
  cout << res << endl;
  return 0;
}
