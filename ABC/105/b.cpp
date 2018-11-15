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
  int n;
  cin >> n;

  bool res = false;
  for (int i = n; i > 0; i -= 11) {
    if (i % 4 == 0 || i % 7 == 0 || i % 11 == 0) res = true;
  }

  if (res) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
