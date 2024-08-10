#include<stdio.h>
int main()
{
          //CHAPTER 2
          //Practice question 1
    int a;
    printf("Enter the number to check if it's devisible by 2 or not \n");
    scanf("%d",&a);
    printf("%d \n",a % 2 == 0);      
    
            //CHAPTER 3
            //Practice question 1
    int b;
    printf("Enter your marks \n");
    scanf("%d",&b);
    if (b<30)
    {
        printf("C \n");
    }
    else if (b>=30 && b<70)
    {
        printf("B \n");
    }
    else if (b>=70 && b<90)
    {
        printf("A \n");
    }
    else if (b>=90 && b<100)
    {
        printf("A+ \n");
    }
    else
    {
        printf("Invalid number \n");
    }

            //Practice question 2
    
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z')  //c>=65 && c<=90 
    {
        printf("Upper case \n");
    }
    else if (ch>='a' && ch<='z')  //c>=97 && c<=122
    {
        printf("Lower case \n");
    }
    else
    {
        printf("Not english letter");
    }
    return 0;
}