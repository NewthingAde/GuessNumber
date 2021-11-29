/*
Design the function header for a function that converts SEK to another currency. 
The function should take two arguments: the number of SEK and the exchange rate
(the exchange rate will vary depending on what currency it is converted to). 
The function should return how much it is in the specified currency.

Think carefully about what type both the arguments should be and give the arguments appropriate names. 
Also, think about a fitting name for the actual function as well as what return type the function should have.
*/


#include <stdio.h>
#include<stdlib.h>


float converter(float numberOfSek,float exchangeRate);

float converter(float numberOfSek,float exchangeRate){

float result;

 result = numberOfSek*exchangeRate;

    return result;
}


int main(void) {

    float numberOfSek,exchangeRate,value;
    int name;
   

printf("Welcome to the exchange rate system\n");
printf("Enter amount of SEK\n");
scanf("%f", &numberOfSek);
printf("Enter the exchange rate\n");
scanf("%f", &exchangeRate);
value = converter(numberOfSek,exchangeRate);

printf("%.2f is %.2f", numberOfSek, converter(numberOfSek, exchangeRate));

return 0;

}
