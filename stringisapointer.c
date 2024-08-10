#include<stdio.h>
int main(){

char *canchangename ={"Puspak Barua Rithen"};   //Store string in memory & the assigned address is stored in the char pointer 'canchangename'
                                                //can be reinitialized
        
puts(canchangename);

canchangename ="Rithen Barua";

puts(canchangename);

canchangename ="Rithen";

puts(canchangename);

char cannotchangename[] = "PBR";                //cannot be reinitialized

puts(cannotchangename);

 // cannotchangename = "Puspak";        //red error 

puts(cannotchangename);

    return 0;
}