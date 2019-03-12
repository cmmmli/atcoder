#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <map>
#include <set>
#include <ctype.h>
#include <numeric>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
const ll MOD = 1e9 + 7;
const int INF = 1e9;

int dx4[4] = { 0, -1, 1, 0 };
int dy4[4] = { -1, 0, 0, 1 };
int dx8[8] = { 0, -1, 1, 0, -1, 1, -1, 1 };
int dy8[8] = { -1, 0, 0, 1, -1, -1, 1, 1 };

int main() {
  int tmp, ans = 0;
  int n, m, c; cin >> n >> m >> c;
  vector<int> b(m); for (int i = 0; i < m; ++i) cin >> b[i];
  for (int i = 0; i < n; ++i) {
    int num = 0;
    for (int k = 0; k < m; ++k) {
      cin >> tmp;
      num += tmp * b[k];
    }
    if (num + c > 0) ++ans;
  }

  cout << ans << endl;
  return 0;
}
