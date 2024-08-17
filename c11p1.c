 //WAP to allocate memory to store five price

#include<stdio.h>
#include<stdlib.h>

int main(){

float *ptr;

ptr = (float*) malloc(5 * sizeof(float));

ptr[0] = 24;
ptr[1] = 5;
ptr[2] = 0;
ptr[3] = 505.56;
ptr[4] = 28.82;

for(int i=0; i<5; i++){
    printf("Price of product no: %d is :%.2f\n",(i+1),ptr[i]);
}
    return 0;
}