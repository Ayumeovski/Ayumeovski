#include <stdio.h>
#include <string.h> 

void banner() {
printf(" / \\---------------------,    \n");
printf(" \\_,|                    |    \n");
printf("    |    Jogo da forca   |     \n");
printf("    |  ,-------------------    \n");
printf("    \\_/__________________/    \n\n"); 
}

void chuta(int n, int m) {
        char chute;
        printf("What letter you think it is: ");
        scanf(" %c", &chute);

        n[m] = chute;
        m++;
}

int main() {

    banner();

    char palavrasecreta[20];
    sprintf(palavrasecreta, "MELANCIA");

    char chutes[26];
    int tentativas = 0;

    int acertou = 0;
    int enforcou = 0;

    do {

        for (int i = 0; i < strlen(palavrasecreta); i++) {
          int achou = 0;

        for(int j = 0; j < tentativas; j++) {
          if(chutes[j] == palavrasecreta[i]) {
            achou = 1;
            break;
          }

        }

        if(achou) {
          printf("%c", palavrasecreta[i]);
        }
        else {
          printf("_ ");
        }

      }

        printf("\n");

        chuta(chutes, tentativas);

    } while(!acertou && !enforcou);
  return 0;
}