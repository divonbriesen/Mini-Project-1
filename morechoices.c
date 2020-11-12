#include <stdio.h>

int main(void) 
{
    int aNumber = 99;
    printf("Enter an integer, which is not the %d you have now: ", aNumber);   
    scanf("%d", &aNumber);

    printf("You entered: %d\n", aNumber);

    if(aNumber >= 18)
    {
        printf("You can vote\n");
    }
    else
    {
           printf("You can't vote\n");
    }
    

    if(aNumber >= 16)
    {
        printf("You CAN drive\n");
    }
    else
    {
           printf("You can't drive\n");
    }

    if(aNumber > 21)
    {
        printf("you can buy alcohol\n");
    }
    else
    {
           printf("You can't buy alcohol\n");
    }



  // printf("char size: %lu bytes a random numbers is here: %d\n", sizeof(char), 888);
}