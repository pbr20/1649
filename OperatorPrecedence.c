#include<stdio.h>
#include<math.h>
int main()
{ 

    //Chapter 2
    //part1

/*  

* , / , % 

+ , -

=

*/
int a= 4+9*10;
printf("a=%d \n", a);

// Ans will be 94 not 130

// Associativity (for same precedence)
// Left to right

int b= 4*3/6*2;
printf("b=%d \n" , b);

/*

Ans will be 4 not 1 coz left to right as it is same precedence

4*3/6*2
12/6*2
2*2
4

*/

/*     
                           Bracket

If there is bracket then at first compiler will operate 
that value that's inside the bracket it will not follow 
the operator precedence rule 

BUT 

If there is same precedence without bracket then it will 
follow the OP rule 

NOW

There can be same precedence inside the bracket or outside
the bracket without any bracket at that case it will follow
the OP rule

*/

int c=16/(4*2)*3;
printf("c=%d \n", c);

/*

Ans will be 6 not 24

16/(4*2)*3
16/8*3
2*3
6

*/

int d=16/4*2*3;
printf("d=%d \n", d);

//As you can see it's giving different value 

//     EXAMPLES

int GOAT=100/(10*2/4*10)/2*(49/7);
printf("GOAT=%d", GOAT);

//   Operator precedence between Arithmetic, Relational and Logical operator






            //part2

/*

!

* , / , %

+ , -

< , <= , > , >=

== , !=

&&

||

=

*

*/
return 0;
}