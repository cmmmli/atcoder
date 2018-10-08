#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> cards(N);
  for (int i = 0; i < N; i++) {
    cin >> cards.at(i);
  }
  sort(cards.begin(), cards.end());
  reverse(cards.begin(), cards.end());

  int alice, bob = 0;
  for (int i = 0; i < N; i++) {
    if(i % 2 == 0) {
      alice += cards.at(i);
    } else {
      bob += cards.at(i);
    }
  }
  // cout << "alice: " << alice << endl;
  // cout << "bob: " << bob << endl;
  cout << alice - bob << endl;
  return 0;
}
