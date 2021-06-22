#include <stdio.h>
using namespace std;

int main()
{
	unsigned int fib[46];
	fib[0] = 0;
	fib[1] = 1;
	int x;
	scanf("%d",&x);
	for(int j = 2; j <= x; j++){
		fib[j] = fib[j-1]+fib[j-2];
	}
	for(int i = 0; i < x; i++){
		if (i == (x-1)){
			printf("%d\n",fib[i]);
		}else{
			printf("%d",fib[i]);
			printf(" ");
		}

	}
	return 0;
}
