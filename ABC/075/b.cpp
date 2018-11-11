#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int dx[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };
int dy[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };

vector<string> S;

int main() {
  int H, W;
  cin >> H >> W;

  S.clear();
  for (int i = 0; i < H; ++i) {
    string str;
    cin >> str;
    S.push_back(str);
  }

  vector<vector <int> > res(H, vector<int>(W, 0));
  for (int i = 0; i < H; ++i) {
    for (int j = 0; j < W; ++j) {
      for (int k = 0; k < 8; ++k) {
        int ni = i + dx[k], nj = j + dy[k];
        if (ni < 0 || ni >= H || nj < 0 || nj >= W) continue;
        if (S[ni][nj] == '#') ++res[i][j];
      }
    }
  }

  for (int i = 0; i < H; ++i) {
    for (int j = 0; j < W; ++j) {
      if (S[i][j] == '.') cout << res[i][j];
      else cout << '#';
    }
    cout << endl;
  }

  return 0;
}
