#include <stdio.h>

int main()
{
	int n;
	int LA, LB, SA, SB;
	scanf("%d", &n);
	scanf("%d%d", &LA, &LB);
	scanf("%d%d", &SA, &SB);
	if ((n >= LA && n <= LB) && (n >= SA && n <= SB))
		printf("%s\n", "possivel");
	else
		printf("%s\n", "impossivel");
	return 0;
}