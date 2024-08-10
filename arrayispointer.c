#include<stdio.h>
int main(){

int arr[]  = {1 , 2, 3, 4};

int *ptr = &arr[0];

printf("%d\n",ptr);   // address of arr[0]

int *_ptr = arr;

printf("%d\n",_ptr);   //it will print the address of arr[0] coz arr is a pointer
    return 0;
}                       //hence we can say arr and &arr[0] is same both represent the first address of an array  