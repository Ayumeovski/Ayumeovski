#include <stdio.h>
#include <stdlib.h>
#include <time.h>

short main() {

  printf("- Bem vindo(a) ao jogo -\n\n");

  int segundos = time(0);
  srand(segundos);

  short tentadouser;
  short correct;

  int secnum = rand() % 100;
  int tentativas = 1;
  short tentativanum;

  short lvl;
  printf("(1) Easy - (2) Medium - (3) Hard\n");
    printf("Qual é a dificuldade que você quer jogar? ");
      scanf("%d", &lvl);
      
    switch(lvl) {
      case 1:
        tentativanum = 20;
        break;
      case 2:
        tentativanum = 15;
        break;
      case 3:
        tentativanum = 5;
        break;
      default:
        tentativanum = 25;
        break;
    }

  float pontos = 1000;

  for(int i = 1; i <= tentativanum; i++) {
    printf("Qual é o seu chute? ");
      scanf("%d", &tentadouser);

      printf("Tentativa %d\n\n", tentativas);
      
      if (tentadouser < 0){
        printf("Você não pode chutar numeros negativos\n\n");

        continue;
      }

      correct = (tentadouser == secnum);
      short maior = (tentadouser > secnum);
        
      if (correct) {
        printf("Você conseguiu acertar em %d tentativas\n", tentativas);
        printf("Parabéns !!, tente novamente\n\n");

          break;
      }
      else if (maior) {
        printf("Seu numero é maior que o numero secreto!! \n\n");
      }
      else {
        printf("Seu chute é menor que o numero secreto!! \n\n");
      }
      tentativas++;

      float losedpon = abs(tentadouser - secnum) / (float)2;
      pontos = (pontos - losedpon);

   }

      if(correct) { 
        printf("Você conseguiu parabens, jogue novamente!!\n");
        printf("Você acertou em %d tentativas\n", tentativas);
        printf("Pontos Totais - %.1f\n", pontos);
      }
      else {
        printf("You losed ;-; \n");
      }
}