#include <stdio.h> /*make a program to convert farenhiet to kelvin to 
                            celsius*/
int main()
{
  char val_a, val_b;
  int val, ans;
  printf("WELCOME TO TEMPERATURE CONVERTOR!\n <<<<<<A TO B>>>>>>\nEnter A: (K/F/C)");
  scanf(" %c", &val_a);

  printf("Enter B:");
  scanf(" %c", &val_b);

  printf("Enter Value:");
  scanf(" %d", &val);

  switch (val_a)
  {
  case 'K':
    if (val_b == "C")
    {
      ans = val - 273.5;
      printf("CONVERSION OF KELVIN TO CELSIUS SUCCESSFULL!");
      printf("ANSWER IS: %dC", ans);
      
    }

    else if (val_b == 'F')
    {
      ans = (val - 273.5) * 1.8 + 32;
      printf("CONVERSION OF KELVIN TO FARENHIET SUCCESSFULL!");
      printf("ANSWER IS: %dF", ans);
      
    }
    break;

  case 'C':
    if (val_b == 'K')
    {
      ans = val + 273.5;
      printf("CONVERSION OF CELSIUS TO KELVIN SUCCESSFULL!");
      printf("ANSWER IS: %dK", ans);
      
    }

    else if (val_b == 'F')
    {
      ans = (val * 1.8) + 32;
      printf("CONVERSION OF CELSIUS TO FARENHIET SUCCESSFULL!");
      printf("ANSWER IS: %dF", ans);
      
    }
    break;

  case 'F':
    if (val_b == 'C')
    {
      ans = (val - 32) * 0.55;
      printf("CONVERSION OF FARENHIET TO CELSIUS SUCCESSFULL!");
      printf("ANSWER IS: %dC", ans);
      
    }

    else if (val_b == 'K')
    {
      ans = (val - 32) * 0.55 + 273.15;
      printf("CONVERSION OF FARENHIET TO KELVIN SUCCESSFULL!");
      printf("ANSWER IS: %dC", ans);
      
    }
    break;

  default:
    printf("CODE ERROR!");
    break;
  }

  return 0;
}
