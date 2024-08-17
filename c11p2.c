  //WAP to allocate memory size of n when n is entered by user

#include<stdio.h>
#include<stdlib.h>

int main(){

int n;
int *ptr;

printf("Enter n:");
scanf("%d",&n);

ptr = (int*) calloc(n , sizeof(int));

for(int i=0; i<n; i++){
    printf("%d\n",ptr[i]);
}

       

    return 0;
}