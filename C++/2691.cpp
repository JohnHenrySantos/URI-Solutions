#include <iostream>
#include <stdio.h>

using namespace std;
int main() {
  int cases, n1, n2;
  char C;
  cin >> cases;
  while(cases--){
    scanf("%d%c%d",&n1,&C,&n2);
  if (n1 == n2){
    for (int i = 5; i <= 10; i++){
      printf("%d x %d = %d\n", n1,i,n1*i);
    }
  }else{
        for (int i = 5; i <= 10; i++){
      printf("%d x %d = %d && %d x %d = %d\n", n1,i,n1*i,n2,i,n2*i);
    }
  }
}
  return 0;
}