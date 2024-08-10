#include<stdio.h>

void price(float n);

int main(){

float n;
printf("Enter the price \n");
scanf("%f" ,&n);     

price(n);     /*Changes to parameters in function don't
                change the values in calling function
                Because a copy of argument is passed to 
                the funtion */

printf("Primary price is : %f \n" ,n);


    return 0;
}

void price(float n){
    n= n + (n*0.20);
    printf ("Price after vat : %f \n", n);
}