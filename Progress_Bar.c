//PROGRESS BAR              INCOMPLETE
#include<stdio.h>
#include<unistd.h>
const int max=50;
void progress_bar(int progress);
int main(){
for (int i = 0; i <= 100; i++)
{
    printf("\033[H\033[J");
    progress_bar(i);
    usleep(50000);
}
for (int i = 0; i <= 100; i++)
{
    printf("\033[H\033[J");
    progress_bar(i);
    usleep(5000);
}




return 0;
}
void progress_bar(int progress){
int number =(max*progress)/100;
printf("TASK: [");
for (int i = 0; i < max; i++)
{
    if (i<number)
    {
        printf("#");
    }
    else 
    {
        printf(" ");
    }
    
    
}
printf("]%d%% \n", progress);
}

