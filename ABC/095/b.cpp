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

int m[1010];

int main() {
  int n, x;
  cin >> n >> x;
  int sum = 0;
  int minval = 1e9;
  for (int i = 0; i < n; ++i) {
    cin >> m[i];
    sum += m[i];
    minval = min(minval, m[i]);
  }
  x -= sum;
  int res = n;
  for (int i = x; i >= minval; i -= minval) {
    ++res;
  }
  cout << res << endl;
  return 0;
}
