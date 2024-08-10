#include<stdio.h>
int main()
{
       //CHAPTER 3
       /*     IF-ELSE    

       if(condition){
          //do something if true
           }
        else{
            //do something if false
        }
       
       */
    int a,b,age;
    printf("How old are you? \n");
    scanf("%d",&a);
    if(a>=18)
    {
     printf("You are adult \n");
     printf("You can vote \n");
     printf("You can have a driving licences \n");
    }
    else
    {
     printf("You are not adult \n");
    }

        /*If there isn't multiple commands then you
          don't need to put curly braces*/
        //Better you put curly braces everytime 
    printf("Thank you! \n");

    /*        ELSE IF
     if(condition 1)
     {
        //do something if true
     }
     else if(condition 2)
     {
        //do something if 1st is false and 2nd is true
     else if(condition 3)
     {
        //do something if 2nd is false and 3rd is true
     }
    */
    printf("How old are you again? \n");
    scanf("%d",&b);
    if(b>=18)
    {
        printf("Adult \n");
    }
    else if(b>=13 && b<18)
    {
        printf("Teenage \n");
    }
    else
    {
        printf("Child \n");
    }
    /*
    If 2nd command is not related to 1st then dont 
    need to use else if 
    */
/*          TERNARY OPERATORS
     use thin when there is only one things to execute 
    dont use semicolon after colon
*/

    printf("How old are you again? \n");
    scanf("%d",&age);
    age>=18? printf("Adult"):printf("Not adult");
    return 0;
}