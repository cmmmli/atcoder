#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
#include <map>
#include <ctype.h>
using namespace std;

typedef long long ll;

int dx[4] = { 0, -1, 1, 0 };
int dy[4] = { -1, 0, 0, 1 };

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int res = min(a, b) + min(c, d);
  cout << res << endl;
  return 0;
}
