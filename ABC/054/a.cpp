#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <map>
#include <set>
#include <ctype.h>
#include <numeric>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef pair<ll, ll> Pll;
const ll MOD = 1e9 + 7;
const int INF = 1e9;

int dx4[4] = { 0, -1, 1, 0 };
int dy4[4] = { -1, 0, 0, 1 };
int dx8[8] = { 0, -1, 1, 0, -1, 1, -1, 1 };
int dy8[8] = { -1, 0, 0, 1, -1, -1, 1, 1 };

int main() {
  vector<int> cards = { 13, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
  int a, b; cin >> a >> b; --a; --b;
  if (cards[a] > cards[b]) cout << "Alice" << endl;
  else if (cards[a] < cards[b]) cout << "Bob" << endl;
  else cout << "Draw" << endl;
  return 0;
}
