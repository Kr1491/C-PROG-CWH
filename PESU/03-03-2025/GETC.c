// GET C FUNCTION and PUT C
// Get C and Put C are used for character-based input and output operations when working with files.
/*They allow us to read and write a single character from or to a file  */

/*GET C FUNCTION is used to read a single character from a file*/
/*SYNTAX: int getc(FILE *stream); *
/* Where Stream: The file Pointer from which a character is read*/
/*Returns the ASCII Integer value of the read character*/
/*Returns EOF (-1) if the end of the file is reached or there is an error*/

/*Program-1: Read a character from a file*/
#include <stdio.h>
int main(){
    FILE *file;
    char ch;
    file = fopen("getc_sample.txt","r");
    if (file  == NULL){
        printf("File Not Found!");
        return 1;
    }
    ch = getc(file);
    printf("Character Read: %c\n",ch);
    fclose(file);
    return 0;
}