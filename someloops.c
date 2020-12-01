#include<stdio.h>

int main(void)
{
    int startNumber = 0;
    int endNumber = 10;

    printf("Gimme two numbers: ");
    scanf("%d", &startNumber, &endNumber);
    printf("You put in %d and %d\t\t", startNumber, endNumber);

    if(1000 <= startNumber && startNumber < 2000 )
    {
        //aNumber > 1000;
        printf("number is between 1000 and 2000 INCLUSIVE\n");
        //a mtha equation here
        //discount = blahblah;
        // total price = quantityOrdered * price * discount
    }
    else if(startNumber > 2000)
    {
        printf("Number ain't in your range, buddy\n");
        //a mtha equation here
    }
    else
    {
        printf("you suck!!\n");
        //a mtha equation here
    }
    
    // total price = quantityOrdered * price * discount

    return 99;
}