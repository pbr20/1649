                //slicing

#include<stdio.h>

void slice(char str[] , int n , int m);

int main(){

char str[500] ;

fgets(str , 500 , stdin);

slice(str , 10 , 20);



    return 0;
}

void slice(char str[] , int n , int m){
    
    char newstr[500];
    int j =0;
    for(int i=n; i<=m; i++ , j++){
       newstr[j] = str[i] ;
    }
    newstr[j] = '\0';
    puts(newstr);
}