#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
#include <map>
using namespace std;

typedef long long ll;

int dx[4] = { 0, -1, 1, 0 };
int dy[4] = { -1, 0, 0, 1 };

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  bool res = false;
  if (abs(a - c) <= d) res = true;
  else if (abs(a - b) <= d && abs(b - c) <= d) res = true;
  if (res) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
