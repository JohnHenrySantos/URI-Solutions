#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	string line;
	int sum, n;
	string n1,n2,n3;
	cin >> n;
	while(n--){
	cin >> line;
	n1= line.substr(2,2);
	n2 = line.substr(5,3);
	n3 = line.substr(11,2);
	sum = stoi(n1)+stoi(n2)+stoi(n3);
	cout << sum << endl;
	}
	return 0;
}