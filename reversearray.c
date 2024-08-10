#include<stdio.h>

void reverse(int arr[] , int n);

void array(int arr[] , int n);

int main(){

int arre[] = {1 , 2, 3, 4 , 5 , 6};      //even reverse

int arro[] = {1 , 2 , 3 , 4 , 5};         //odd reverse

                        //even 
     
array(arre , 6);                      //Forward

reverse(arre , 6);                     //reverse
array(arre , 6);

                        //odd

array(arro , 5);                      //Forward

reverse(arro , 5);                     //reverse
array(arro , 5);



    return 0;
}

void reverse(int arr[] , int n){
    for(int i=0; i<n/2; i++){
        int firstvalue = arr[i];
        int secondvalue = arr[n-i-1];
        arr[i] = secondvalue;
        arr[n-i-1] = firstvalue;
    }
   
}

void array(int arr[] , int n){
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}