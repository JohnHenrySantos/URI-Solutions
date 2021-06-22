#include <stdio.h>
using namespace std;
int main()
{
	int o = 0, e = 0;
	int n, check;
	int odd[5], even[5];

	for (int i = 0; i < 15; i++)
	{
		scanf("%d", &n);
		if (n % 2 == 0)
		{
			even[e] = n;
			e++;
		}
		else
		{
			odd[o] = n;
			o++;
		}

		if (e == 5)
		{
			check = 0;
			while (check != 5)
			{
				printf("par[%d] = %d\n", check, even[check]);
				check++;
			}
			e = 0;
		}
		if (o == 5)
		{
			check = 0;
			while (check != 5)
			{
				printf("impar[%d] = %d\n", check, odd[check]);
				check++;
			}
			o = 0;
		}
		if (i == 14)
		{
			check = 0;
			while (check < o)
			{
				printf("impar[%d] = %d\n", check, odd[check]);
				check++;
			}
			check = 0;
			while (check < e)
			{
				printf("par[%d] = %d\n", check, even[check]);
				check++;
			}
		}
	}
	return 0;
}