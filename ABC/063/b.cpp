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
  vector<char> ss;
  string ans = "yes";
  for (int i = 0; i != str.size(); ++i) {
    auto result = find(ss.begin(), ss.end(), str[i]);
    if (result == ss.end()) {
      ss.push_back(str[i]);
    } else {
      ans = "no";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
