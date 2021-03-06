#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
#include <map>
#include <set>
#include <ctype.h>
#include <numeric>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
const ll MOD = 1e9 + 7;
const int INF = 1e9;

int dx4[4] = { 0, -1, 1, 0 };
int dy4[4] = { -1, 0, 0, 1 };
int dx8[8] = { 0, -1, 1, 0, -1, 1, -1, 1 };
int dy8[8] = { -1, 0, 0, 1, -1, -1, 1, 1 };

int main() {
  string s;
  cin >> s;

  set<char> ss;
  for (int i = 0; i != s.size(); ++i) {
    ss.insert(s[i]);
  }
  if (ss.size() == 26) {
    cout << "None" << endl;
  } else {
    for (char chr = 'a'; chr <= 'z'; ++chr) {
      if (ss.count(chr) == 0) {
        cout << chr << endl;
        break;
      }
    }
  }
  return 0;
}
