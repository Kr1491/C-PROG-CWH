#include <stdio.h>

int main()
{ 
  printf("--------------------------------\n");
  printf("---------CBSE-PORTAL------------\n");
  int math; int sci; int eng;
  printf("MATHEMATICS (OUT OF 100)>>\n");
  scanf("%d",&math);

  printf("SCIENCE (OUT OF 100)>>\n");
  scanf("%d",&sci);

  printf("ENGLISH (OUT OF 100)>>\n");
  scanf("%d",&eng);


  int out = math + eng + sci;
  int perc_out = out/3;

  printf("Obtained Marks: %d\n",out);
  printf("--------------------------------\n");
  printf("PERCENTAGE (%): %d%/\n",perc_out);
  printf("--------------------------------\n");
  if (perc_out >= 33)
  {
    
    printf("You passed the UT-1!\n");
  }
  
  else{

    printf("Sorry You Failed the UT-1, Try harder next time!");

  }
  printf("--------------------------------");


  return 0;
}
