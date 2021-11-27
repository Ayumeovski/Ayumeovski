#include <stdio.h>
#include <string.h>

short main() {
    char hungnumber[20]; /* Cria uma array com o limite de 20 chars */
    sprintf(hungnumber, "MELANCIA"); /* Diz o que sera colocado nesta array */

    /* Declaração de Variavel */
    int correct = 0;
    int hung = 0;

    do {
        char userattempt;
        printf("What letter do you think is - ? ");
        scanf("%c", &userattempt);

                /* O strlen le a quantidade de chars que colocamos para o loop */
        for (short comp = 0; comp < strlen(hungnumber); comp++) {
            if(hungnumber[comp] == userattempt) {
                printf("Viewing if the position %d have the letter\n", comp);
                printf("The letter that i'm viewing %c\n", hungnumber[comp]);
            }
        }
    } while (!correct && !hung);

}