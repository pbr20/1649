#include<stdio.h>
#include<string.h>

int main(){

FILE *fptr;

char str[10000];

fptr = fopen("c10hw1.txt" , "r");

if(fptr == NULL){
    printf("File doesn't exist\n");
    return 1;
}


while(fgets(str , sizeof(str) , fptr) != NULL){ 
   
    printf("%s", str);

}

printf("\n\n");



fclose(fptr);



    return 0;
}