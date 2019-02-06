#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
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
  int n, m;
  cin >> n >> m;


  vector<int> x(m);
  multiset<int> dist;
  int tmp;
  for (int i = 0; i < m; ++i) cin >> x[i];
  if (n >= m) {
    cout << "0" << endl;
    return 0;
  }
  sort(x.begin(), x.end());
  for (int i = 1; i < m; ++i) {
    tmp = x[i] - x[i -1];
    dist.insert(tmp);
  }

  int ans = 0;
  ans = x[m - 1] - x[0];
  auto itr = dist.end();
  for (int i = 0; i < n - 1; ++i) {
    --itr;
    ans -= *itr;
  }
  cout << ans << endl;
  return 0;
}
