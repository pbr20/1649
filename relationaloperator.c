#include<stdio.h>
#include<math.h>
int main ()
{
    //Chapter 2
    
   /*
         EQUAL TO

   If L.H is equal to R.H then output is true or 1  
   If not then output is false or 0
   
   */   
   
printf("%d \n", 4==4);
printf("%d \n", 4==3);

    /*
        NOT EQUAL TO

    If L.H is not equal to R.H then output is true or 1  
    If not then output is false or 0

    */
 
printf("%d \n", 4!=4);
printf("%d \n", 3!=4);

    /*
        LESS THAN 

    If L.H is less than to R.H then output is true or 1  
    If not then output is false or 0    
    
    */

printf("%d \n", 4<3);
printf("%d \n", 3<4);
printf("%d \n", 4<4);

    /*
        LESS THAN EQUAL

    If L.H is less than equal to R.H then output is true or 1  
    If not then output is false or 0    
    
    */

printf("%d \n", 4<=4);
printf("%d \n", 3<=4);
printf("%d \n", 5<=4);

    /*
        GREATER THAN 

    If L.H is greater than to R.H then output is true or 1  
    If not then output is false or 0    
    
    */

printf("%d \n", 4>3);
printf("%d \n", 3>4);
printf("%d \n", 4>4);

    /*
        GREATER THAN EQUAL

    If L.H is greater than equal to R.H then output is true or 1  
    If not then output is false or 0    
    
    */

printf("%d \n", 4>=4);
printf("%d \n", 5>=4);
printf("%d \n", 3>=4);

    return 0;
}