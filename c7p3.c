                //Reverse array normal way 
#include<stdio.h>

void arr(int *arr, int n);

int main(){

int num[] = {1 , 2 , 3 , 4 , 5 , 6};

arr( num , 5);



    return 0;
}

void arr(int *arr , int n){
    for(int i= n; i>=0; i--){
        printf("%d \t",arr[i]);
    }
}