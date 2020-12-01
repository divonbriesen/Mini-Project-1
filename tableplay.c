#include<stdio.h>

int main(void)
{
/* 
An electrical components company offers discounts on various components ordered in quantity.  Write a program to display the data in the table below as a table, prompt the user for and read in the quantity, component number and unit cost,  and then display the original price and discount offered along with the total discounted price.

Display the total price from all the elements purchased.

Item Number	Description	
Discount
0 -299

Discount
300 - 499	Discount
( 500 + )
0	Resistor	5%	7.5%	10%
1	Capacitor	5%	7.5%	10%
2	Transistor	2.5%	5%	10%
3	Integrated Circuits	2.5%	5%	10%
The price for each Resistor is $0.50
The price for each Capacitor is $0.75
The price for each transistor is $0.75
The price for each IC is $1.25 
*/
    const char HORIZONTAL_RULE[] = "______________________________________________";
    
    printf("_____________________________________\n");

    for(int i = 1; i <= 10; i++)
    {
        printf("| %s |   %d  |  %d  |\n");
    }

    printf("_____________________________________\n");
}