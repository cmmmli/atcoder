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
  string str; cin >> str;
  sort(str.begin(), str.end());
  bool ans = false;
  if (str[0] == str[1] && str[1] != str[2] && str[2] == str[3]) {
    ans = true;
  }
  if (ans) cout << "Yes" << endl;
  else cout << "No" << endl;


  return 0;
}
