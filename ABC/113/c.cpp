#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

vector<pair<int,int> > v[110001];
int N, M;

int main() {
  cin >> N >> M;
  for (int i = 0; i < M; ++i) {
    int P, Y;
    cin >> P >> Y;
    pair<int,int> p;
    p.first = Y;
    p.second = i;
    v[P].push_back(p);
  }

  pair<int,int> ans[110001];

  for (int i = 1; i <= N; ++i) {
    sort(v[i].begin(), v[i].end());
    for (int j = 0; j < v[i].size(); ++j) {
      ans[v[i][j].second].first = i;
      ans[v[i][j].second].second = j;
    }
  }

  for (int i = 0; i < M; ++i) {
    cout << setw(6) << setfill('0') << ans[i].first;
    cout << setw(6) << setfill('0') << ans[i].second + 1 << endl;
  }
  return 0;
}
