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
  int a, b;
  cin >> a >> b;
  int n = 0;
  int o = 0;
  for (int i = 1; i < 1000; ++i) {
    n += i;
    if (n - o == b - a) {
      cout << n - b << endl;
      return 0;
    }
    o = n;
  }
  return 0;
}
