#include<stdio.h>
int main ()
{
  char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z')  //ch>=65 && ch<=90 
    {
        printf("Upper case \n");
    }
    else if (ch>='a' && ch<='z')  //ch>=97 && ch<=122
    {
        printf("Lower case \n");
    }
    else
    {
        printf("Not english letter");
    }



    return 0;
}