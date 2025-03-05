// #include <stdio.h>
// int main()
// { 
//   int ans;
//   printf(">>");
//   scanf("%d",&ans);


//   for (int i = 1; i <= ans; i++)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       printf("*");
//     }
//     printf("\n");
//   }

//   return 0;
// }
#include <stdio.h>
int main()
{
  int num;
  printf(">>");
  scanf("%d",&num);
  for (int i = 1; i <= num; i++)
  {
    for (int j = 0; j < i; j++)
    {
      printf("*",j);
    }
    printf("\n"); 
  }
}
