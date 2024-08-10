#include <stdio.h>
int sum(int a, int b); //declaration //function prototype //this part tell the compiler that this function exist
        //parameter
void printtable(int n);    //void don't return any value

int main()
{
    int a ,b , s; /*here main funtion and sum fuction 
                    variable a and b will take storage 
                    from memory seperately from diffrent
                    location of the memory .Inspite of  
                    having same variable name they will 
                    take storage from different location
                    coz they are from diffrent funtion*/

printf("Enter the first number: \n");
scanf("%d",&a);
printf("Enter the second number: \n");
scanf("%d",&b);

      s= sum(a , b);
         //function call

printf("Sum is %d \n",s);

printtable(s);   //function call 
     //here s is argument or actual parameter 
    return 0;

}
          //Function defination
int sum( int a ,int b /*we can also declare diffrent variable name  */){     //function defination
    return a + b;
    //return value
}

void printtable(int n){  //here n is parameter or formal parameter
    for(int i=1; i<=10; i++){
        printf("%d \n", i*n);
    }
}