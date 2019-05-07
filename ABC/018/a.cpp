#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <map>
#include <set>
#include <ctype.h>
#include <numeric>
#include <math.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef pair<ll, ll> Pll;
const ll MOD = 1e9 + 7;
const int INF = 1e9;

int dx4[4] = { 0, -1, 1, 0 };
int dy4[4] = { -1, 0, 0, 1 };
int dx8[8] = { 0, -1, 1, 0, -1, 1, -1, 1 };
int dy8[8] = { -1, 0, 0, 1, -1, -1, 1, 1 };

int main() {
  int a[3];
  for (int i = 0; i < 3; ++i) cin >> a[i];
  int maxval = max(a[0], max(a[1], a[2]));
  int minval = min(a[0], min(a[1], a[2]));
  for (int i = 0; i < 3; ++i) {
    if (a[i] == maxval) a[i] = 1;
    else if (a[i] == minval) a[i] = 3;
    else a[i] = 2;
  }
  for (int i = 0; i < 3; ++i) cout << a[i] << endl;
  return 0;
}
