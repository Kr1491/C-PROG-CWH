#include <stdio.h>
int fibonacci(int a){
 if(a==0||a==1){
   return 1;
 }
 else{
   return fibonacci(a-1) + fibonacci(a-2);
 }
}
int main(){
    int a,b;
    printf("Enter a number: ");
}