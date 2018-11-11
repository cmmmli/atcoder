#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int dx[4] = { 0, -1, 1, 0 };
int dy[4] = { -1, 0, 0, 1 };

vector<string> s;

int main() {
  int H, W;
  cin >> H >> W;

  s.clear();
  for (int i = 0; i < H; ++i) {
    string str;
    cin >> str;
    s.push_back(str);
  }

  int flag;

  vector<vector <int> > res(H, vector<int>(W, 0));
  for (int i = 0; i < H; ++i) {
    for (int j = 0; j < W; ++j) {
      if (s[i][j] == '.') continue;
      flag = 0;
      for (int k = 0; k < 4; ++k) {
        int ni = i + dx[k], nj = j + dy[k];
        if (ni < 0 || ni >= H || nj < 0 || nj >= W) continue;
        if (s[ni][nj] == '#') ++flag;
      }
      if (flag == 0) {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << "Yes" << endl;
  return 0;
}
