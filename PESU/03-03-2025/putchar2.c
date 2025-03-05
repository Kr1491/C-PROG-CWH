//printing a string character by character
#include <stdio.h>
int main(){
    char str[] = "Hello";
    int i = 0;
    while (str[i]!='\0'){
        putchar(str[i]);
        i++;
    }
}

/*IN C Language, String always ends with Null character '\0'*/
/*Null character is used to indicate the end of the string*/