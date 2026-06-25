#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int random;
    int guess;
    int no_of_guesses=0;
    srand(time(NULL));


    
    printf("**********Welcome to Number Guessing*********\n");
    random=rand()%100+1;/*genarates integers,%100 makes reminder 0 to 99,+1 completes 1 to 100*/

    do{
        printf("\nPlease Enter Your guess between(1 to 100):");
        scanf("%d",&guess);
        no_of_guesses++;


        if(guess<random){
            printf("++++++Guess larger number++++++\n");
        }
        else if(guess>random){
            printf("------Guess Smaller number-----\n");
        }
        else{
            printf("!!!!!!You Have Sucessfully Guessed the correct Number!!!!!!!\n");
            printf("Attempts %d\n",no_of_guesses);
        }

    }while (guess != random);
    printf("Thanx for Playing\n");
    printf(" Devloped by: OG Creation\n");
    return 0;
}

