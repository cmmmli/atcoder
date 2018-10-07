#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> x(N), y(N), h(N);
  for(int i = 0; i < N; i++) {
    cin >> x.at(i) >> y.at(i) >> h.at(i);
  }

  int MAX = 100;

  for(int posY = 0; posY <= MAX; posY++) {
    for(int posX = 0; posX <= MAX; posX++) {
      int needH = -1;
      for(int i = 0; i < N; i++) {
        if(h.at(i) > 0) {
          int tmp = h.at(i) + abs(posY - y.at(i)) + abs(posX - x.at(i));
          if (needH == -1) {
            needH = tmp;
          } else {
            if (needH != tmp) {
              needH = -2;
              break;
            }
          }
        }
      }
      if (needH == -2) continue;
      // for (int i = 0; i < N; i++) {
      //   if (h.at(i) == 0) {
      //     int dist = abs(posY - y.at(i)) + abs(posX - x.at(i));
      //     if (needH > dist) {
      //       needH = -2;
      //       break;
      //     }
      //   }
      // }
      // if (needH == -2) continue;
      cout << posX << " " << posY << " " << needH << endl;
      return 0;
    }
  }
}
