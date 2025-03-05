#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character (ignoring spaces): ");
    while ((ch=getchar())==' ');
    printf("First non-space character: %c\n",ch);
    return 0;
}