#include<stdio.h>
int main()
{
   //         Chapter 2
  
   /*
             AND OPERATOR

    If both equation is true then output is true 1
    And if not then output is false or 0

   */

printf("%d \n", 3<4 && 5<4);
printf("%d \n", 3<4 && 5>4);

    /*
             OR OPERATOR

    If only one equation or the both equation is true then output is true 1
    And if none of them are true then output is false or 0

    */

printf("%d \n", 3<4 || 4<3);
printf("%d \n", 6<4 || 4<3);
printf("%d \n", 3<4 || 5>3);

    /*
             NOT OPERATOR

    If the equation is true then output is false
    And if the equation is false then output is true

    */

printf("%d \n", !(3<4 && 5<4));
printf("%d \n", !(3<4 && 5>4));

printf("%d \n", !(3<4 || 4<3));
printf("%d \n", !(6<4 || 4<3));
printf("%d \n", !(3<4 || 5>3));






    return 0;
}