#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	int n;
	int n1,n2;
	string songs [] = {"PROXYCITY","P.Y.N.G.", "DNSUEY!","SERVERS","HOST!","CRIPTONIZE","OFFLINE DAY","SALT","ANSWER!","RAR?","WIFI ANTENNAS"};
	scanf("%d",&n);
	while(n--){
		cin >> n1 >> n2;
		for(int i = 0; i < 11; i++){
			if(n1+n2 == i)
			cout << songs[i] << endl;
		}
	}
	return 0;
}