/*Copying contents from 1 file to another*/
#include <stdio.h>
int main(){
    FILE *source, *destination;
    char ch;
    source = fopen("getc_sample.txt","r");
    destination = fopen("gg_sample.txt","w");
    if (source == NULL){
        printf("Error in opening the file\n");
        return 1;
    }
    ch = getc(source);
    while (ch != EOF){
        putc(ch,destination);
        ch = getc(source);
    }
    fclose(source);
    fclose(destination);
    return 0;

}