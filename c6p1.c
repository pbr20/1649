#include<stdio.h>
int main(){

int x;
int *ptr;

ptr = &x;
*ptr= 0;   // x = 0

printf("x = %d \n" ,x);
printf("*ptr = %d \n", *ptr);

*ptr += 5;   // x = 5

printf("x = %d \n" ,x);
printf("*ptr = %d \n", *ptr);
  
(*ptr)++;    // x = 6  bracket must be used to increment the value of ptr

printf("x = %d \n", x);
printf("*ptr = %d \n", *ptr);
  
  
  
  
    return 0;
}