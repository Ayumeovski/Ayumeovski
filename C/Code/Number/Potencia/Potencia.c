#include <stdio.h>

void potencia(int user, int userentrytwo) {
    
  int result = user * userentrytwo;
    printf("%d por %d é igual a %d\n", user, userentrytwo, result);
}

int main() {
    int userentry;
    int userer;
    printf("Numero: ");
        scanf("%d", &userentry);
    printf("Multiplicar por: ");
        scanf("%d", &userer);

        potencia(userentry, userer);
}
