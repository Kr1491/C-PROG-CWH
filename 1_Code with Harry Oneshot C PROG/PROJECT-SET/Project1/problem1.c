#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  // Seed the random number generator with the current time
  srand(time(0));
  int a = (rand() % 10) + 1;

  int main = 0;
  int tries = 0;

  while (tries < 3)
  {
    tries++;
    int ans;
    printf("Enter Guess: ");
    scanf("%d", &ans);

    if (tries > 0)
    {
      if (ans == a)
      {
        break;
      }

      else if (tries == 3)
      {
        printf("GAME OVER\nSorry You used all your tries!\n Better Luck Next Time!");
        break;
      }

      else
      {
        printf("You Have (%d/3) Tries Left\n", tries);
      }
    }

    if (ans == a)
    {
      printf("You have Guessed it Right!\n");
      main = 1;
      break;
    }

    else if (ans > a)
    {
      printf("Put Lesser Num\n");
    }

    else if (a > ans)
    {
      printf("Put Greater Num!\n");
    }
  }

  return 0;
}