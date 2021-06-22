#include <stdio.h>

int main()
{
	int EC, LC, AC;
	int AP, LP;
	scanf("%d%d%d", &EC, &LC, &AC);
	scanf("%d%d", &AP, &LP);
	
	if (AC <= AP && LC <= LP)
	printf("S\n");
	
	else if (AC <= AP && EC <= LP)
	printf("S\n");
	
	else if (LC <= AP && EC <= LP)
	printf("S\n");
	
	else if (EC <= AP && LC <= LP)
	printf("S\n");
	
	else if (AC <= LP && LC <= AP)
	printf("S\n");
	
	else if (EC <= AP && AC <= LP)
	printf("S\n");

	else
	printf("N\n");
	return 0;
}