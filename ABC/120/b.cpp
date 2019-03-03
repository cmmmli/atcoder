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
  int a, b, k; cin >> a >> b >> k;
  int cnt = 0;
  int tmp = __gcd(a, b);

  for (int i = tmp; i > 0; --i) {
    if (a % i == 0 && b % i ==0) {
      ++cnt;
      if (cnt == k) {
        cout << i << endl;
        return 0;
      }
    }
  }
  return 0;
}
