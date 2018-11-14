#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

typedef long long ll;


int main() {
  int n, m, x, y;
  cin >> n >> m >> x >> y;
  vector<int> ns(n), ms(m);
  for (int i = 0; i < n; ++i) {
    cin >> ns[i];
  }
  for (int i = 0; i < m; ++i) {
    cin >> ms[i];
  }

  int res;

  for (int i = x + 1; i < y; ++i) {
    res = 0;
    for (int j = 0; j < n; ++j) {
      if (ns[j] >= i) continue;
      ++res;
    }
    if (ns.size() != res) continue;
    for (int j = 0; j < m; ++j) {
      if (ms[j] < i) continue;
      ++res;
    }
    if (ns.size() + ms.size() != res) continue;
    cout << "No War" << endl;
    return 0;
  }

  cout << "War" << endl;
  return 0;
}
