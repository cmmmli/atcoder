#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> mochi(N);
  for (int i = 0; i < N; i++) {
    cin >> mochi.at(i);
  }
  sort(mochi.begin(), mochi.end());
  reverse(mochi.begin(), mochi.end());

  int max = 1000;
  int result = 0;
  for (int i = 0; i < N; i++) {
    if(mochi.at(i) < max) {
      result++;
      max = mochi.at(i);
    }
  }

  cout << result << endl;
  return 0;
}
