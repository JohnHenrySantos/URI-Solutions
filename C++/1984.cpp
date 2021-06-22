#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
	char n[11];
	string num = "";
	cin >> n;
	for(int i = strlen(n)-1; i >= 0; i--){
		num += n[i];
	}
	cout << num << endl;
	return 0;
}