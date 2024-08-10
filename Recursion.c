#include<stdio.h>

void printhlw(int count);
int main()
{
printhlw(5);

    return 0;
}
//recursion function
void printhlw(int count){
     if(count == 0){
        return;           //nothing after return coz it's void type return
     }
     printf("Hello world \n");
     printhlw(count -1);          //function call by itself
}