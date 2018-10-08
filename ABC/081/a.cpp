#include<iostream>
using namespace std;
int main()
{
  	string str;
  	cin >> str;
  	int sum = 0;
  	for(int i=0; i < str.size(); i++){
      	if(str.at(i) == '1')
          sum++;
    }
  	cout << sum << endl;
  	return 0;
}
