#include<stdio.h>

int main(){
    
    FILE *fptr;

    int n;

fptr = fopen("c10p3.txt" , "w");

printf("Enter the number till you wanna save the odd numbers in file from 1\n");
scanf("%d",&n);

fprintf(fptr, "Odd numbers from 1 to %d are belows\n\n", n);

for(int i=1; i<=n; i++){
    if(i % 2 != 0){
        fprintf(fptr , "%d, " , i);
    }
}


fclose(fptr);


    return 0;
}