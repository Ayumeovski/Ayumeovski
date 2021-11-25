#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    short segundos = time(0);
    srand(segundos);

    short n1 = rand();
    short n2 = rand();

    printf("%d, %d\n", n1, n2);
}