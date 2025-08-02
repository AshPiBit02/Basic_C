#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    const int MIN=1;
    const int MAX=100;
    int guess,count,answer;
    srand(time(0));
    answer=(rand()%MAX)+MIN;
    printf("Number Guessing Game(1 to 100)\n");
    do
    {
        printf("Enter a guess:");
        scanf("%d",&guess);
        count++;
        if(answer>guess)
        {
            printf("Too low!\n");
        }
        else if(answer<guess)
        {
            printf("Too high!\n");
        }
        else
        {
            printf("Congratulation!\n");
            printf("Correct guess in %d attempt.",count);
        }
        
    } while (guess!=answer);
    
    return(0);
}