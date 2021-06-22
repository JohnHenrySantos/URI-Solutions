#include <iostream>
#include <string>

using namespace std;

int main(){
	string line;
	while(getline(cin,line)){
		if (line == "esquerda")
		cout << "ingles" << endl;
		if (line == "direita")
		cout << "frances" << endl;
		if (line == "nenhuma")
		cout << "portugues" << endl;
		if (line == "as duas")
		cout << "caiu" << endl;
	}
	return 0;
}