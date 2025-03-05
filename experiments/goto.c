#include <stdio.h>
int main(){
    label:
        printf("1");
        goto end;
    goto label;
    printf("2");
    end:
        printf("3");
    
}