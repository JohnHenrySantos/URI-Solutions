#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	string line, d, m, y;
	cin >> line;
	d = line.substr(0, 2);
	m = line.substr(3, 2);
	y = line.substr(6, 2);
	cout << m << "/" << d << "/" << y << endl;
	cout << y << "/" << m << "/" << d << endl;
	cout << d << "-" << m << "-" << y << endl;
	return 0;
}