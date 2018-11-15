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
  string s;
  cin >> s;

  int res = 0;
  for (int i = 0; i != s.size(); ++i) {
    if (s.at(i) == '+') ++res;
    else if (s.at(i) == '-') --res;
  }
  cout << res << endl;
  return 0;
}
