#include<stdio.h>

int main(void)
{
    int startNumber = 0;
    int endNumber = 10;

    printf("Gimme two numbers: ");
    scanf("%d", &startNumber, &endNumber);
    printf("You put in %d and %d\t\t", startNumber, endNumber);

    if(startNumber > 1000)
    {
        //aNumber > 1000;
        printf("Dang, that's a big number!\n");
    }
    else
    {
        printf("Well, that's ok, but it's not over 1000!\n");
    }

    int iDifference = endNumber - startNumber; 

    // (1- initialization; 2- conditional statement; change)
    for(int iCounter = startNumber; iCounter <= endNumber; iCounter++) // (int i = 0; i < 100; i++)
    {
        printf("The current count is: %d\n", iCounter);
    }

    return 99;
}