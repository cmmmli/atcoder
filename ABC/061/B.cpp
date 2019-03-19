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
typedef pair<ll, ll> Pll;
const ll MOD = 1e9 + 7;
const int INF = 1e9;

int dx4[4] = { 0, -1, 1, 0 };
int dy4[4] = { -1, 0, 0, 1 };
int dx8[8] = { 0, -1, 1, 0, -1, 1, -1, 1 };
int dy8[8] = { -1, 0, 0, 1, -1, -1, 1, 1 };

int main() {
  int n, m; cin >> n >> m;
  vector<int> arr(n);
  for (int i = 0; i < n; ++i) arr[i] = 0;
  for (int i = 0; i < m; ++i) {
    int a, b; cin >> a >> b;
    arr[a - 1]++;
    arr[b - 1]++;
  }

  for (int i = 0; i < n; ++i) {
    cout << arr[i] << endl;
  }
  return 0;
}
