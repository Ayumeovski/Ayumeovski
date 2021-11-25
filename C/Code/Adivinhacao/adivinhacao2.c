#include <stdio.h>
#include <stdlib.h>
#include <time.h>

short main() {

  printf(" - Welcome to the guessing game -\n");

  int secret = time(0);
  srand(secret);

  short usernum;

  int secretnum = rand() % 100;
  int guesstry = 1;
  short attemnumbers = 5;

  float points = 1000;

  for(int i = 1; i <= attemnumbers; i++) {
    printf("What number you think it's? ");
      scanf("%d", &usernum);

      printf("Attempt %d\n\n", guesstry);

      if (usernum < 0) {
        printf("You can't input numbers below 0.");

        continue;
      }
        short rigan = (usernum == secretnum);
        short bignum = (usernum > secretnum);

        if (rigan) {
          printf("Congratulations, you did it in %d attempts\n", guesstry);

          break;
        }
        else if (bignum) {
          printf("Your number is bigger than the secret number\n");
        }
        else {
          printf("Your number is lower than the secret number\n");
        }
        guesstry++;

        float losedpon = abs(usernum - secretnum) / (float)2;
        points = (points - losedpon);
        
  }

  /* if (rigan) {
    printf("Congratulations, you did it in %d attempts\n", guesstry);
    printf("Try again\n\n");
      printf("Total Points = %.1f\n", points); 
  } */
}