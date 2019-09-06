#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <map>
#include <set>
#include <ctype.h>
#include <numeric>
#include <math.h>
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
  int n; cin >> n;
  pair< pair<string, int>, int> pairs[n];

  for (int i = 0; i < n; i++) {
    string name;
    int score;
    cin >> name >> score;
    pairs[i] = make_pair(make_pair(name, -score), i);
  }
  sort(pairs, pairs + n);

  for (int i = 0; i < n; i++) {
    cout << pairs[i].second + 1 << endl;
  }

  return 0;
}
