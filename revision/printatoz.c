#include <stdio.h>    //To print alphabets from a to z

int main(int argc, char const *argv[])
{
  char a = 'a';
  printf("The Alphabets are: ");
  for (a; a < 'z'; a++)
  {
    printf("%c\n",a);
  }
  
  return 0;
}
