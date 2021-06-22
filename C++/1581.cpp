#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	bool verify;
	string line, auxString;
	int n1, n2;
	scanf("%d", &n1);
	while (n1--)
	{
		verify = false;
		scanf("%d", &n2);
		for (int i = 0; i < n2; i++)
		{
			cin >> line;
			if (i == 0)
				auxString = line;
			if (auxString != line){
				verify = true;
			}
		}
		if (verify)
			printf("ingles\n");
		else
			cout << line << endl;
	}

	return 0;
}