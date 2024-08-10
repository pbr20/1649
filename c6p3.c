#include<stdio.h>

void dowork(int a , int b, int* sum , int* product , int* avg);


int main(){

int a= 3; int b= 5;
int sum, product, avg;
dowork(a, b, &sum, &product , &avg);

printf("Sum is %d \n",sum);

printf("Product is %d \n" ,product);

printf("Avg is %d \n",avg);


    return 0;
}

void dowork(int a , int b , int* sum , int* product , int* avg){

    *sum = a + b;
    *product = a * b;
    *avg = (a + b)/2;


}


