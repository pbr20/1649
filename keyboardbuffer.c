#include<stdio.h>
int main(){

char fi,li,favc;
int fav;

printf("Enter your fav number: ");
scanf("%d" , &fav);       //keyboard buffer / input stream //12 <enter>
                              //leftover '\n'
printf("\nEnter your first initial: ");
scanf("%c",&fi);      //take that previous leftover '\n' as input 

printf("\nEnter your last initial: ");
scanf("%c",&li);        //input stream c <enter>
                        //leftover '\n'

printf("\nEnter your fav character: ");
scanf("%c",&favc);      //take that previous leftover '\n' as input 

printf("\n Your initial are %c and %c and your favorite number and character are %d , %c bye\n ",fi,li,fav,favc);


printf("Enter your fav number: ");
scanf("%d" , &fav);       //keyboard buffer / input stream //12 <enter>
                              //leftover '\n'
printf("\nEnter your first initial: ");
scanf("\n%c",&fi);      //"\n%c" recognize the buffer input \n or enter key

printf("\nEnter your last initial: ");
scanf("\n%c",&li);       

printf("\nEnter your fav character: ");
scanf("\n%c",&favc);      

printf("\n Your initial are %c and %c and your favorite number and character are %d , %c bye\n ",fi,li,fav,favc);


    return 0;
}