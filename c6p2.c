#include<stdio.h>

void printAddress(int n);
void _printAddress(int* n);

int main() {
     int n= 4;

     printf("%p\n", &n);
     printf("%u\n", &n);
     printAddress(n);

     printf("%p\n", &n);
     printf("%u\n", &n);
     _printAddress(&n);
     return 0;
}
//call by value thats why address won't be same.
void printAddress(int n){
    printf("%p \n", &n);
    printf("%u\n", &n);
}

//call by reference thats why addresss will be same.
void _printAddress(int *n){
    printf("%p\n", n);  
    printf("%u\n", n); 
                            /*The address of n from main function 
                            is stored in n from printAddress function
                            therefore the value of n from pA function is the 
                            address of n from main function*/

    
}