#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

typedef long long ll;


int main() {
  int N;
  cin >> N;
  vector<vector<int> > m(2, vector<int> (N, 0));
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < N; ++j) {
      cin >> m[i][j];
    }
  }

  int tmp[2][110];
  for (int i = 0; i < 2; ++i) tmp[i][0] = 0;

  for (int i = 1; i <= N; ++i) {
    tmp[0][i] = tmp[0][i - 1] + m[0][i - 1];
    tmp[1][i] = max(tmp[0][i], tmp[1][i - 1]) + m[1][i - 1];
  }

  cout << tmp[1][N] << endl;
  return 0;
}
