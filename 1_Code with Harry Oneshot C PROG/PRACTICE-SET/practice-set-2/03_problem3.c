#include<stdio.h>
int main()
{
  int ans;
  printf("Enter>> "); 
  scanf("%d",&ans);

  if (ans%97 == 0)
  {
    printf("%d is divisible by 97 :)",ans);
  }

  else{
    printf("%d is not divisible by 97 T.T",ans);
  }
  

  return 0;
}