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
  int n;
  cin >> n;
  char tmp;
  for (int i = 0; i < n; ++i) {
    cin >> tmp;
    if (tmp == 'Y') {
      cout << "Four" << endl;
      return 0;
    }
  }
  cout << "Three" << endl;
  return 0;
}
