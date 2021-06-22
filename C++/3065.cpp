#include <stdio.h>

int main() {
  int count = 1;
  int n, num, result;
    while (true)
    {
    scanf("%i", &n);
    if (n == 0) break;
        result = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%i",&num);
            result+=num;
        }

        printf("Teste %i\n", count);
        printf("%i\n", result);
        printf("\n");
        count++;
    }
}