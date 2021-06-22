#include <stdio.h>

int main()
{
    int H1, M1, H2, M2, M, T;
    scanf("%d %d %d %d", &H1, &M1, &H2, &M2);
    T = H2 - H1;
    if (T < 0){
       T = 24 + (H2 - H1);
    }
    M = M2 - M1;
    if (M < 0) {
        M = 60 + (M2 - M1);
        T--;
    }
    if (H2 == H1 && M2 == M1) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", T, M);
    
    return 0;

}