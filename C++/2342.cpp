#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int n1,n2, x;
	char c;
	scanf("%d", &x);
	cin >> n1 >> c >> n2;
	if (c == '+'){
		if (n1+n2 <= x)
		printf("OK\n");
		else 
		printf("OVERFLOW\n");
	} else if (c == '*'){
		if (n1*n2 <= x)
		printf("OK\n");
		else 
		printf("OVERFLOW\n");
	}
	return 0;
}