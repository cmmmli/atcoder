#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
#include <map>
using namespace std;

typedef long long ll;


int main() {
  int n;
  cin >> n;
  map<string, int> strs;
  string str, old;
  bool res = true;
  for (int i = 0; i < n; ++i) {
    cin >> str;
    strs[str]++;
    if (strs[str] >= 2) res = false;
    if (i > 0 && (old.at(old.size() - 1) != str.at(0))) res = false;
    old = str;
  }

  if (res) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
