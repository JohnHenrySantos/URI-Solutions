#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	int box[3];
	for (int i = 0; i < 3; i ++){
		scanf("%d",& box[i]);
	}
	int n = sizeof(box)/sizeof(box[0]);
	sort(box, box+n);
	printf("%d\n", box[1]);
	return 0;
}