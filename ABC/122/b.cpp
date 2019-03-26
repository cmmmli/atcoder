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
  string str; cin >> str;
  int ans = 0, cnt = 0;
  for (int i = 0; i != str.size(); ++i) {
    if (str[i] == 'A' || str[i] == 'C' || str[i] == 'G' || str[i] == 'T') cnt++;
    else cnt = 0;
    ans = max(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}
