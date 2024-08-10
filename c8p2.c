      //Taking user input with %c

#include<stdio.h>
int main()
{
char name[100];
char ch;
int i =0;
                               //This loop act like gets or fgets
                               
while(ch != '\n'){                   // \n means enter that's mean when user will press enter the loop will break 
    scanf("%c",&ch);
    name[i] = ch;                       
    i++;
}
name[i] = '\0';                 //to represent the array as a string coz we used %c

printf("Your name is: ");
puts(name);



    return 0;
}