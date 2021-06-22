#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int x, y, n;
	cin >> x >> y;
	if (x > y)n = x;
	if (x < y)n = y;
	if (x == y)n = x;
	printf("%d\n", n);
	return 0;
}