#include<stdio.h>
#include <stdlib.h>
int main()
{
    int random_value , guess_value , count = 0;

    random_value =rand();
    printf("-------------------------------------------------\n");
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a random number between 1 and 100.\n");
    printf("-------------------------------------------------\n");
    while (1)
    {
        printf("Enter your guess : ");
        scanf("%d",&guess_value);

        count++;

        if((guess_value < 1) || (guess_value > 100))
        {
            printf("please,Enter number between 1 and 100 \n");
        }
        else if (guess_value > random_value)
        {
            printf("Try a lower number\n");
        }
        else if (guess_value < random_value)
        {
            printf("Try a higher number\n");
        }
        else
        {
            printf("Congratulations! You guessed the correct number (%d) in %d attempts!\n",random_value,count);
            return 0;
        }
    }
    
    
}