#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
 
  string name; 
  double n, total, sum = 0;
  int count = 0;

  while(getline(cin,name) && cin >> n){

    getchar();
    sum += n;
    count++;  

  }

  total = sum/count;
  cout.precision(1);   
  cout << fixed << total << endl;

}
