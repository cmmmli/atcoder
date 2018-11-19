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
  string n;
  cin >> n;

  if (n[1] != n[2]) {
    cout << "No" << endl;
    return 0;
  }

  int count = 0;
  char base = n[0];
  for (int i = 1; i != n.size(); ++i) {
    if (n[i] == base) ++count;
    else {
      base = n[i];
    }
  }

  if (count >= 2) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
