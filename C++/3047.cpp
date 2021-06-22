#include <iostream>
#include<algorithm> 
using namespace std;

int main() {
  int son, oldSon;
  int x[3];
  for (int i = 0; i < 3; i++){
    cin >> x[i];
  }
  son = x[0] - (x[1]+x[2]);
  x[0] = son;
  oldSon = max(x[0],max(x[1],x[2]));
  cout << oldSon << endl;
  return 0;
}