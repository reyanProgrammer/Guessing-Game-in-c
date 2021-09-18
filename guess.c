#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand()%100 + 1;
    // printf("the number is %d", number);
    do{
        printf("Guess The Number Between 1 To 100\n");
        scanf("%d", &guess);
        if(guess>number){
            printf("Lower Number please!\n");
        } else if(guess<number){
            printf("Higher Number please!\n");
        } else{
            printf("you guessed in %d attempts\n", nguesses);
        }

        nguesses++;
    }while(guess!=number);
    return 0;
}