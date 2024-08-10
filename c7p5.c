                    //storing multiple tables in multidimensional array 
#include<stdio.h>

void table(int tab[][10] ,int n , int m, int number);

int main(){
 int tab[10][10];

 table(tab , 0 , 10 , 1);
 table(tab , 1 , 10 , 2);
 table(tab , 2 , 10 , 3);
 table(tab , 3 , 10 , 4);
 table(tab , 4 , 10 , 5);
 table(tab , 5 , 10 , 6);
 table(tab , 6 , 10 , 7);
 table(tab , 7 , 10 , 8);
 table(tab , 8 , 10 , 9);
 table(tab , 9 , 10 , 10);

printf("Table of one:\n");

 for(int i=0 ; i<10; i++){
    printf("%d\t",tab[0][i]);
 }

printf("\nTable of two:\n");

for(int i=0 ; i<10; i++){
    printf("%d\t",tab[1][i]);
 }

printf("\nTable of three:\n");

for(int i=0 ; i<10; i++){
    printf("%d\t",tab[2][i]);
 }

printf("\nTable of four:\n");

for(int i=0 ; i<10; i++){
    printf("%d\t",tab[3][i]);
 }

printf("\nTable of five:\n");

for(int i=0 ; i<10; i++){
    printf("%d\t",tab[4][i]);
 }

printf("\nTable of six:\n");

for(int i=0 ; i<10; i++){
    printf("%d\t",tab[5][i]);
 }

printf("\nTable of seven:\n");

for(int i=0 ; i<10; i++){
    printf("%d\t",tab[6][i]);
 }

printf("\nTable of eight:\n");

for(int i=0 ; i<10; i++){
    printf("%d\t",tab[7][i]);
 }

printf("\nTable of nine:\n");

for(int i=0 ; i<10; i++){
    printf("%d\t",tab[8][i]);
 }

printf("\nTable of ten:\n");

for(int i=0 ; i<10; i++){
    printf("%d\t",tab[9][i]);
 }

 printf("\n");

    return 0;
}

void table(int tab[][10] , int n , int m , int number){
    for(int i=0; i<m; i++){
        tab[n][i] = number * (i+1);
    }
}
