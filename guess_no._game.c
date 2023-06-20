#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int number, guess, attempts=1;
    srand(time(0));
    number = rand()%100+1;

    // printf("Generated number is:%d\n", number);

    do{
        printf("Guess the number b/w 1 to 100\n");
        scanf("%d", &guess);

        if(guess>number){
            printf("Lower Number Please!\n");
        }
        else if(guess<number){
            printf("Greater Number Please!\n");
        }
        else{
            printf("CONGRATULATIONS,\n\t you gussed it in %d attempts\n",attempts);
        }
        attempts++;
    }while(guess!=number);
    
    return 0;
}