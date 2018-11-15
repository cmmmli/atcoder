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
  string s, t;
  cin >> s >> t;

  for (int i = 0; i != s.size(); ++i) {
    if (s == t) {
      cout << "Yes" << endl;
      return 0;
    }
    rotate(s.begin(), s.begin() + 1, s.end());
  }

  cout << "No" << endl;
  return 0;
}
