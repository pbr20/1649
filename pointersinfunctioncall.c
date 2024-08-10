#include<stdio.h>

void square(int n);

void _square(int* n);



int main(){

int number;

printf("Enter number :");
scanf("%d",&number);

square(number);                        /*call by value - a copy of the argument is passed 
                                         that's why change in parameter wont't change the argument */
printf("square = %d\n",number);
                                           //argument 


_square(&number);                        /*call by reference -here the address is passed 
                                           so change in parameter will change the argument */
printf("square = %d\n",number);

    return 0;
}

void square(int n){

n = n * n;

printf("square = %d\n",n);


                                 //parameter 
}

void _square(int *n){

 *n = (*n) * (*n);     // n = n * n

printf("Square = %d\n",*n);

}