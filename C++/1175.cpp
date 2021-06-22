#include <iostream>
#include <stdio.h>
#define n 20

using namespace std;

int main()
{
	int x = 19;
	int M[n];
	for(int i = 0; i < n; i++){
		cin >> M[x];
		x--;
	}
	for (int i = 0; i < n;  i++){
		printf("N[%d] = %d\n", i, M[i]);
	}
	return 0;
}