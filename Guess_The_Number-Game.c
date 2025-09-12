//GAME IF GUESSING A NUMBER
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
int random,guess;
int attempts=0;
srand(time(0));
random=rand() % 100;
printf("%d",random);
printf("GUESS MY NUMBER \n");
while (1)
{
    scanf("%d",&guess);
    attempts++;
    if (guess>random)
    {
        printf("MAKE A LOWER GUESS");
    }
    if (guess<random)
    {
        printf("MAKE A HIGHER GUESS");
    }
    if (guess == random)
    {
        break;
    }
    
}
printf("THATS MY NUMBER......... YOU GUESSED IN %d ATTEMPTS",attempts);

return 0;
}
