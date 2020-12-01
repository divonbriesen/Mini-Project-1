#include<stdio.h>
int main(void)
{ // this program demonstrates all the different ways of getting and outputting different data types
    
    int anInteger = 2147483647;
    float aFloat = 3.3;
    double aDouble = 4.4;
    long aLong = 1234567890L;
    char aChar = 'x'; // note the SINGLE quotes!
    char aNotherChar = 'Y';
    char aListofChars[50] = ""; // note that this is an array of characters
    char aString[50] = ""; // note that a string is just an array of characters - don't let the names confuse you
    // boolean?
    



    
    printf("Please enter an integer, float, double, long,  char, char2, and a string:\n\t");
    printf("Integer __SIZEOF_INT__ is %d and __INT_MAX__ is %d\n", __SIZEOF_INT__, __INT_MAX__);


    //scanf("", anInteger, aFloat, aDouble, aLong, aChar, aNotherChar, aString);


    char string[25];
    printf("Enter the name:");
    scanf("%[^\n]*c",string);
    printf("My name is %s",string);
}