#include <iostream>

using namespace std;

int main()
{
	int x = 12;
	double average = 0;
	double sum = 0;
	char operation;
	cin >> operation;
	double matriz[x][x];
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cin >> matriz[i][j];
      if (j < (11-i) && j < i)
      			sum += matriz[i][j];
		}
	}
	if (operation == 'S')
	{
		cout.precision(1);
		cout << fixed << sum << endl;
	}
	else if (operation == 'M')
	{
		cout.precision(1);
		average = sum / 30;
		cout << fixed << average << endl;
	}
	return 0;
}