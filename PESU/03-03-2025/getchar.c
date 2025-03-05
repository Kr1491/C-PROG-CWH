/*<<GET CHAR FUNCTION>>*/
/*Get char function is used to read a single character from 
standard input, it is commonly used for reading user input one 
character at a time*/

/*SYNTAX: int getchar(void); */
/*Returns the ASCII Integer value of the entered character*/

#include <stdio.h>
int main(){
    printf("Enter a character: ");
    char ch = getchar();
    printf("You entered %d\n",ch);
    return 0;
}
