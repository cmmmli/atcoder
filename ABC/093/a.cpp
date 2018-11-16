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
  string s;
  cin >> s;
  vector<char> ss = {'a', 'b', 'c'};
  int res = 0;
  for (int i = 0; i < 3; ++i) {
    auto result = find(ss.begin(), ss.end(), s[i]);
    if (result != ss.end()) {
      ++res;
      ss.erase(result);
    }
  }
  if (res == 3) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
