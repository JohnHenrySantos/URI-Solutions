#include <iostream>
#include <stdio.h>
#define x 5

using namespace std;

int main() {
  int n, cases, C = 0;
  scanf("%d",&n);
  for(int i = 0; i < x; i++){
    scanf("%d",&cases);
    if (cases == n) C++;
  }
  cout << C++ << endl;
  return 0;
}