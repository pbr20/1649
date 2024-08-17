            //Create an array of size 5(using calloc) and input it's value by user

#include<stdio.h>
#include<stdlib.h>

int main(){

int *a;

a = (int*) calloc(5 , sizeof(int));

for(int i=0; i<5; i++){
    printf("Number %d: ",(i+1));
    scanf("%d",&a[i]);
}

for(int i=0; i<5; i++){
    printf("Number %d: %d\n",(i+1),a[i]);
}


    return 0;
}