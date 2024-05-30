#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int Number,guess,nGuesses=1;
    srand(time(0));
    Number = rand()%100;

     do{
        
        printf("Guess the number between 1 and 100:\n");
        scanf("%d",&guess);
   
        if(guess>Number)
        {
            printf("Lower number please.....\n");
        }
         else if(guess<Number)
        {
            printf("Higher number please.....\n");
        }
        else
        {
            printf("Yayy!!!!....You Got it.\n You took %d attempts",nGuesses);
        }
        nGuesses++;
        
    }while(guess!=Number);


return 0;
}
