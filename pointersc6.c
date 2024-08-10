#include<stdio.h>
int main(){

int age =20;
int *ptr = &age;  /*ptr or pointers is a variable that 
                    stores the memory address of another variable*/ 
int _age = *ptr;            
printf("%d \n",_age);
    
     // * value of address
     // & value of operator 

//        FORMAT SPECIFIER for address

printf("%p \n", &age);   // %p is the format specifier of address but it will print the address in hexadecimal NS
printf("%u \n" ,&age);   // %u is unsigned int to get the address in int value we can use the format specifier

printf("%p \n", ptr);     
printf("%u \n" ,ptr);

printf("%p \n", &ptr);
printf("%u \n" , &ptr);

//         FORMAT SPECIFIER for value

printf("%d \n", age);
printf("%d \n", *ptr);
printf("%d \n", *(&age));

//         POINTERS to POINTERS

int y = 28;
int *yy = &y;
int **yyy = &yy;
int ***yyyy = &yyy;

 printf("y = %d \n", y);   
 printf("*yy = %d \n", *yy);
 printf("**yyy = %d \n", **yyy);
 printf("***yyyy = %d \n", ***yyyy);   
    
    return 0;
}