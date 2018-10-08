#include<iostream>
#include<vector>
using namespace std;

int fn(vector<int>& vec)
{
  int i = 0;
  while(vec.at(i % vec.size()) % 2 == 0){
    vec.at(i % vec.size()) /= 2;
    i++;
  }
  return i / vec.size();
}

int main()
{
  int N;
  cin >> N;
  vector<int> vec(N);
  for(int i=0; i < N; i++) {
    cin >> vec.at(i);
  }
  cout << fn(vec) << endl;
  return 0;
}
