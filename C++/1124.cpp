#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
	int L, C, R1, R2;

	while (true)
	{
		cin >> L >> C >> R1 >> R2;
		if(L+C+R1+R2 == 0)break;
		if (min(L, C) < max(R1, R2) * 2)
			printf("N\n");
		else
		{
			R1 += R2;
			L -= R1;
			C -= R1;

			if (R1 * R1 > ((L * L) + (C * C)))
				printf("N\n");
			else
				printf("S\n");
		}
	}
	return 0;
}