
#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int guessFunction(int);

// This is a function for my operation
int guessFunction(int number){

	int randomNumber;
    srand(time(NULL)); 
    srand(100);
	randomNumber=rand()%100+1;
    
    //printf("\nRandom number: %d", randomNumber);

	        if(randomNumber>number){
		    printf("\nYour guess:%d is too low, try again!",number);
            }
	        else if(randomNumber<number){
	    	printf("\nYour guess:%d is too high, try again!",number);
	        }
            else{
            printf("\nYour guess:%d Congratulations! Your guessed it Right!",number);
            }   
}

//The main function

int main(void){
	int number;
	int guessNumber;
	int count = 0;

	printf("\nI’m thinking of a number between 1 and 100, guess which!");
        do{
		printf("\nYour Guess: ");
		scanf("%d",&number);

		guessNumber=guessFunction(number); 
        
		count++;
        } while(guessNumber!=number);

	printf("\nYou guessed in %d attempt",count);

    return 0;
}