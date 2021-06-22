#include <stdio.h>

int main(){
  int x, aux = 0;;
  do{
    scanf("%d",&x);
    if(x > aux)aux = x;
  }while(x != 0);
  printf("%d\n",aux);
  return 0;
}