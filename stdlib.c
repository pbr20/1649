#include<stdio.h>
#include<stdlib.h>
int main(){

int a;

printf("Enter a negative number to get its absolute value:");
scanf("%d",&a);

int b = abs(a);             // int abs(int)

printf("Absolute value = %d\n",b);



    return 0;
}