#include <stdio.h>
#include <unistd.h>

int main()
{

    // Write a C program to generate the report card of a student based on his marks secured in the final examination.

    char name[50];
    int standard;
    char section;
    int maths, english, hindi, science, social_science, total_marks;
    char grade = 'X';

    printf("Enter the student's name: ");
    scanf("%[^\n]%*c", name);

    printf("\nEnter the student's standard: ");
    scanf("%d", &standard);

    while ((getchar()) != '\n');

    printf("\nEnter the student's section: ");
    scanf("%c", &section);

    printf("\nEnter the marks secured in Mathematics: ");
    scanf("%d", &maths);

    printf("\nEnter the marks secured in English: ");
    scanf("%d", &english);

    printf("\nEnter the marks secured in Hindi: ");
    scanf("%d", &hindi);

    printf("\nEnter the marks secured in Science: ");
    scanf("%d", &science);

    printf("\nEnter the marks secured in Social Science: ");
    scanf("%d", &social_science);

    printf("\n\nGenerating Report Card...");

    printf("\n\n-----------------------------------------------");

    // usleep(2000000);

    printf("\n\n          Chandigarh University        ");

    printf("\n\n            Annual Report Card              ");

    printf("\n\n\n");
    printf("          Name: %s", name);

    printf("\n");
    printf("          Standard: %d", standard);

    printf("\n");
    printf("          Section: %c", section);

    printf("\n\n\n");
    printf("          Marks Secured out of 100");

    printf("\n\n");
    printf("          Mathematics: %d", maths);

    printf("\n");
    printf("          English: %d", english);

    printf("\n");
    printf("          Hindi: %d", hindi);

    printf("\n");
    printf("          Science: %d", science);

    printf("\n");
    printf("          Social Science: %d", social_science);

    total_marks = maths + hindi + english + science + social_science;

    printf("\n\n\n");
    printf("          Total marks secured: %d", total_marks);

    if (total_marks >= 450 && total_marks <= 500)
        grade = 'A';

    else if (total_marks >= 400 && total_marks < 450)
        grade = 'B';

    else if (total_marks >= 350 && total_marks < 400)
        grade = 'C';

    else if (total_marks >= 300 && total_marks < 350)
        grade = 'D';

    else if (total_marks >= 200 && total_marks < 300)
        grade = 'E';

    else if (total_marks >= 0 && total_marks < 200)
        grade = 'F';
    else
        printf("\n          Invalid Input. Try again");

    if (grade != 'X')
        printf("\n          Grade: %c", grade);

    printf("\n\n-----------------------------------------------");

    return 0;
}