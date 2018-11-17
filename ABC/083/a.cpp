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

int m[1010];

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int left, right;
  left = a + b;
  right = c + d;
  if (left == right) cout << "Balanced" << endl;
  else if (left > right) cout << "Left" << endl;
  else cout << "Right" << endl;
  return 0;
}
