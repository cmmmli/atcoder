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
  int x;
  cin >> x;
  vector<bool> expo(x + 1);

  expo[1] = 1;
  for (int b = 2; b <= x; ++b) {
    int v = b * b;
    while (v <= x) {
      expo[v] = 1;
      v *= b;
    }
  }
  for (int i = x; i >= 1; --i) {
    if (expo[i]) {
      cout << i << endl;
      return 0;
    }
  }
}
