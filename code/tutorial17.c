#include <stdio.h>

int main()
{
  label:
    printf("We are inside label\n");
    goto end;
  goto label;

  end:
    printf("We are inside end\n");
  return 0;
}


 