/*PUTC FUNCTION: Writting a character to a file*/
/*The Putc Function writes a single character to a file*/
/*SYNTAX: int putc(int character, FILE *stream); */
/*Where character: The character to be written to the file*/
/*Where Stream: The file Pointer to which the character is written*/
/*Returns the written character on success, and EOF on failure*/

/*Program-1: To write a character in a file*/
#include <stdio.h>
int main(){
    FILE *file;
    char ch = 'A';
    file = fopen("putc_sample.txt","w");
    putc(ch,file);
    fclose(file);
    return 0;
}



