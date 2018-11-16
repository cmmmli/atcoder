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
  int a, b, x;
  cin >> a >> b >> x;
  if (x < a || a + b < x) {
    cout << "NO" << endl;
    return 0;
  }

  cout << "YES" << endl;
  return 0;
}
