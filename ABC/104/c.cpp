#include <iostream>
#include <string>
#include <vector>
using namespace std;

int D, G;
int p[11], c[11];
int ans = 100000;
vector<int> sumv(11);
int used[11];
int maxVal = -1;


int hoge(int sum, int idx) {
  for (int i = 0; i < D; ++i) {
    if (used[i] == 1) return 0;
    int tmp = sum;
    for (int j = idx; j < p[i]; ++j) {
      tmp += (i + 1) * 100;
      if (tmp >= G) return j + 1;
    }
    tmp += c[i];
    sumv[i] = tmp;
  }
  for (int i = 0; i < sumv.size(); ++i) {
    if (sumv[i] >= maxVal) {
      if ()
      used[i] = 1;
      ans = i;
    }
  }
  hoge(maxVal, ans);
  return 0;
}

int main() {
  cin >> D >> G;
  for (int i = 0; i < D; ++i) {
    cin >> p[i] >> c[i];
  }
  for (int i = 0; i < 11; ++i) used[i] = 0;

  cout << hoge(0, 0) << endl;

  // if (N % 500 <= A) cout << "Yes" << endl;
  // else cout << "No" << endl;
  return 0;
}
