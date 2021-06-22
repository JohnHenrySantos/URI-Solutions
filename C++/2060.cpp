#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int two = 0, three = 0, four = 0, five = 0;
	int N, n;
	cin >> n;
	while(n--){
		cin >> N;
		if (N%2 == 0)two++;
		if (N%3 == 0)three++;
		if (N%4 == 0)four++;
		if (N%5 == 0)five++;
	}
	printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n", two, three, four, five);
	return 0;
}