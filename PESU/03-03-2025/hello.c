#include <stdio.h>
int main(){
    char ch;
    printf("Enter Characters (press 'X' to stop):");
    while ((ch = getchar())!='X'){
        printf("You entered %c\n",ch);
    }
}
