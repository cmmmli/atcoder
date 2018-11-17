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
  int a, b;
  cin >> a >> b;
  int res = 0;
  for (int i = a; i <= b; ++i) {
    if (i % 10 == i / 10000 && i / 10 % 10 == i / 1000 % 10) {
      ++res;
    }
  }
  cout << res << endl;
  return 0;
}
