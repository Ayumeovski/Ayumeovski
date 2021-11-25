#include <stdio.h>

short main() {
    short usernum;
    short multiplicador;

    printf("Insira um número - ");
    scanf("%d", &usernum);

    printf("A tabuada do número %d é:\n", usernum);
    
    for(multiplicador = 1; multiplicador <= 10; multiplicador++) {

        short result = usernum * multiplicador;
        printf("%d . %d = %d\n", multiplicador, usernum, result);
    }
}