    //Allocate to store first 5 odd numbers then reallocate to store first 6 even numbers

#include<stdio.h>
#include<stdlib.h>

int main(){

int *a;

a = (int*) malloc(5 * sizeof(int));

a[0] = 1;
a[1] = 3;
a[2] = 5;
a[3] = 7;
a[4] = 9;

for(int i=0; i<5; i++){
    printf("Odd numbers: %d\t",a[i]);
}

printf("\n\n");

a = realloc(a , 6);

a[0] = 2;
a[1] = 4;
a[2] = 6;
a[3] = 8;
a[4] = 10;
a[5] = 12;

for(int i=0; i<6; i++){
    printf("Even numbers: %d\t",a[i]);
}

    return 0;
}