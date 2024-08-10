                    //Finding largest number from array

#include<stdio.h>

int largest(int num[] , int n);

int main(){

int num[] = {1 , 4 , 64 , 24 , 78543 , 233 , 0 , 10 , 99 , 999};

printf("Largest number from array is : %d",largest(num , 10));




    return 0;
}

int largest(int num [] , int n){
    
    int largeST = num[0];

  for(int i=1; i<n; i++){
    if(num[i] > largeST){
         largeST = num[i];
    }
  }
  return largeST;
}