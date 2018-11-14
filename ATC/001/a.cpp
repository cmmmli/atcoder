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

vector<string> s;
bool res = false;
int h, w;

bool search(int y, int x) {
  if (s[y][x] == 'g') return true;
  s[y][x] = '#';
  for (int i = 0; i < 4; ++i) {
    int nx = x + dx[i], ny = y + dy[i];
    if (nx < 0 || nx >= w || ny < 0 || ny >= h || s[ny][nx] == '#') continue;
    if (search(ny, nx)) return true;
  }
  return false;
}

int main() {
  cin >> h >> w;
  string str;
  pair<int, int> start;

  s.clear();
  for (int i = 0; i < h; ++i) {
    cin >> str;
    s.push_back(str);
    for (int j = 0; j != str.size(); ++j) {
      if (str[j] == 's') start = make_pair(i, j);
    }
  }
  res = search(start.first, start.second);

  if (res) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
