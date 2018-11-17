#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
#include <map>
#include <set>
#include <ctype.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
const ll MOD = 1e9 + 7;
const int INF = 1e9;

int dx4[4] = { 0, -1, 1, 0 };
int dy4[4] = { -1, 0, 0, 1 };
int dx8[8] = { 0, -1, 1, 0, -1, 1, -1, 1 };
int dy8[8] = { -1, 0, 0, 1, -1, -1, 1, 1 };

int m[1010];

int main() {
  int n;
  cin >> n;
  map<int, int> mp[2];
  int tmp;
  for (int i = 0; i < n; ++i) {
    cin >> tmp;
    if (i & 1) mp[1][tmp]++;
    else mp[0][tmp]++;
  }

  vector<P> p[2];
  for (int i = 0; i < 2; ++i) {
    for (auto pp: mp[i])
      p[i].push_back(make_pair(pp.second, pp.first));
  }

  sort(p[0].rbegin(), p[0].rend());
  sort(p[1].rbegin(), p[1].rend());
  int a1 = p[0][0].first, a2 = 0;
  int b1 = p[1][0].first, b2 = 0;
  if (p[0].size() > 1) a2 = p[0][1].first;
  if (p[1].size() > 1) b2 = p[1][1].first;

  if (p[0][0].second == p[1][0].second) {
    cout << min(n - a1 - b2, n - a2 - b1) << endl;
  } else {
    cout << n - a1 - b1 << endl;
  }
  return 0;
}
