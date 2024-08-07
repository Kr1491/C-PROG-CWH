#include <stdio.h>
// void giveandtake()
// {
//   int a;
//   printf("Enter number; ");
//   scanf("%d", &a);

//   printf("The number is: %d", a);
// }
// int main()
// {
//   printf(giveandtake());
//   return 0;
// }

void giveandtake(int *a) {
    printf("Enter number: ");
    scanf("%d", a);
    printf("The number is: %d\n", *a);
}

int main() {
    int n;
    giveandtake(&n);
    printf("Returned number is: %d\n", n);
    return 0;
}

