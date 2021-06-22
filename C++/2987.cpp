#include <iostream>
using namespace std;
int main() {
  char n;
  char alphabet[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  cin >> n;
  for(int i = 0; i < 27; i++){
    if (n == alphabet[i]){
      cout << i+1 << endl;;
      break;
    }
  }
  return 0;
}