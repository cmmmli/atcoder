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

int dx[4] = { 0, -1, 1, 0 };
int dy[4] = { -1, 0, 0, 1 };

int m[1010];

int main() {
  int a, b, k;
  cin >> a >> b >> k;
  set<int> set;
  for (int i = a; i < a + k; ++i) {
    if (i > b) break;
    set.insert(i);
  }
  for (int i = b; i > b - k; --i) {
    if (i < a) break;
    set.insert(i);
  }
  for (int t : set) cout << t << endl;
  return 0;
}
