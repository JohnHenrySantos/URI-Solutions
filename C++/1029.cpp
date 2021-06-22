#include <stdio.h>

int calls;

int fib(int n);

using namespace std;

int main()
{
	int t, n, x;

	scanf("%d", &t);
	while (t--)
	{
		calls = 0;
		scanf("%d", &n);
		x = fib(n);
		printf("fib(%d) = %d calls = %d\n", n, calls - 1, x);
	}
	return 0;
}

int fib(int n)
{
	if (n == 0)
	{
		calls++;
		return 0;
	}
	else if (n == 1)
	{
		calls++;
		return 1;
	}
	else
	{
		calls++;
		return fib(n - 1) + fib(n - 2);
	}
}