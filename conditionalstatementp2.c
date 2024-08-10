#include<stdio.h>
int main()
{
   /*
             SWITCH
   */

    char day;
printf("Enter the first letter of the day \n");
scanf("%s",&day);

switch (day) {
    case 's' : printf("Sunday \n");
                  break;
    case 'm' : printf("Monday \n");
                  break;
    case 't'  : printf("Tuesday \n");
                  break;
    case 'w': printf("Wednesday \n");
                  break;
    case 'T': printf("Thursday \n");
                  break;
    case 'f' : printf("Friday \n");
                  break;
    case 'S' : printf("Saturday \n");
                  break;
    
    default     : printf("IG not your day \n");


}
    /*
        Cases can be in any order
        Nested switch (switch insdie switch) are allowed
    */  
    int number;
    printf("Enter the number \n");
    scanf("%d",&number);
    if (number>=0)
    {
     printf("Positive \n");
     if (number%2 ==0)
     {
        printf("Even \n");
     } else {
        printf("Odd \n");
     }} else {
        printf("Negative \n");
     }
    
        
        
    
    
 return 0;
}