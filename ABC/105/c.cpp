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
  int n;
  cin >> n;

  if (n == 0) {
    cout << '0' << endl;
    return 0;
  }

  string res = "";
  while (n != 0) {
    if (n % -2 == 0) res = '0' + res;
    else {
      res = '1' + res;
      --n;
    }
    n /= -2;
  }

  cout << res << endl;
  return 0;
}
