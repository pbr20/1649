                //Finding how many times does a number occure

#include<stdio.h>

int numcount(int numb[] , int n, int m );

int main(){
int m;
int numb[] = {1 , 2 , 3 , 4 , 3 , 6 , 7 , 7 , 9 , 3 };

printf("Enter the number:");
scanf("%d",&m);

printf("WE have found %d times %d in your array\n",numcount(numb , 10 , m), m);

    return 0;
}

int numcount(int numb[] , int n, int m){
    int count = 0;
   for(int i=0; i<n; i++){
    if(numb[i] % m == 0 && numb[i] / m == 1){
        count ++;
    }
   } 
   return count;
}