#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	string line;

	while (cin >> line)
	{
	int R = 0,L = 0,J = 0;
	string r = "", l = "", j = "";
	bool plus = false, equal = false;
		for (auto x : line){
			if(x == '+'){
				plus = true;
				continue;
			}if (x == '='){
				equal = true;
				continue;
            }
            if(!plus&&!equal) r+=x;
            else if(plus&&!equal) l+=x;
            else if(plus&&equal) j+=x;
		}
		if(r == "R")
        {
            J = stoi(j);
            L = stoi(l);
            printf("%d\n",J-L);
        }
        if(l == "L")
        {
            J = stoi(j);
            R = stoi(r);
            printf("%d\n",J-R);
        }
        if(j == "J")
        {
            R = stoi(r);
            L = stoi(l);
            printf("%d\n",L+R);
        }
	}
	return 0;
}