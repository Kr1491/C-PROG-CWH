// #include<stdio.h>

// int main()
// {
//   char c = '*';
//   int a;
//   printf(">>");
//   scanf("%d",&a);

//   for (a; a >= 1; a--)
//   {
//     printf("%c\n",a*c);
//   }
  
//   return 0;
// }

#include <stdio.h>    //COPIED FROM CHAT GPT

int main() {
    int a;
    printf(">>");
    scanf("%d", &a);

    for (int i = a; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            printf("|");
        }
        printf("\n");
    }

    return 0;
}