#include <stdio.h>

int main(void)
{
    printf("***************************START PROGRAM *********************************************\n");

    int studentCount = 0;

    printf("How many students do you have? ");
    scanf("%d", &studentCount);
    printf("You have %d students.\n", studentCount);

    //printf("Enter a grade for each of your %d students separated by spaces:\n", studentCount);

    double testGrades[studentCount];

    //scanf("%lf%lf%lf%lf", &testGrades[0], &testGrades[1], &testGrades[2], &testGrades[3]); 
    //printf("you put in %lf, %lf, %lf, %lf:\n", testGrades[0], testGrades[1], testGrades[2], testGrades[3]); 

    printf("size of is %d\n", sizeof(testGrades));

    for(int iCounter = 0; iCounter < studentCount; iCounter++ )
    {
        int currentNumber = iCounter + 1; // so the display matches the student
        printf("Enter a grade for student %d: ", currentNumber);
        scanf("%lf", &testGrades[iCounter]); 
        //printf("For student %d you put in %lf:\n", currentNumber, testGrades[iCounter]); 
    }
    
    for(int iCounter = 0; iCounter < studentCount; iCounter++ )
    {
        int currentNumber = iCounter + 1; // so the display matches the student
        printf("Student %d: %lf:\n", currentNumber, testGrades[iCounter]); 
    }

    printf("\n\n***************************END PROGRAM *********************************************\n");
    return 99;
}