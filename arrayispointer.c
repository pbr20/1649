#include<stdio.h>
int main(){

int arr[]  = {1 , 2, 3, 4};

int *ptr = &arr[0];

printf("%d\n",ptr);   // address of arr[0]

int *_ptr = arr;

printf("%d\n",_ptr);      //it will print the address of arr[0] coz arr is a pointer

                             //hence we can say arr and &arr[0] is same both represent the first address of an array  

char str[] = {"Rithen"};    

char *__ptr = str;

printf("%s",__ptr);     //It won't print the address when it's string
                         
    return 0;
}                      