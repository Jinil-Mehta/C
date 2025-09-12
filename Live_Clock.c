//LIVE CLOCK
#include<stdio.h> 
#include<time.h>    //for time managemant
#include<unistd.h> //for sleep

int main(){
    while (1)
    {
    time_t now=time(0);
    printf("%s",ctime(&now));
    sleep(1);
    printf("\033[H\033[J");
    }
    return 0;
}
