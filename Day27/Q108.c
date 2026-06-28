#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float english, maths, science, social, computer;
    float total, percentage;
    char grade;
};

char calculateGrade(float percentage)
{
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 80)
        return 'B';
    else if (percentage >= 70)
        return 'C';
    else if (percentage >= 60)
        return 'D';
    else if (percentage >= 40)
        return 'E';
    else
        return 'F';
}

int main()
{
    struct Student s;

    printf("========== MARKSHEET GENERATION SYSTEM ==========\n");

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter English Marks: ");
    scanf("%f", &s.english);

    printf("Enter Mathematics Marks: ");
    scanf("%f", &s.maths);

    printf("Enter Science Marks: ");
    scanf("%f", &s.science);

    printf("Enter Social Science Marks: ");
    scanf("%f", &s.social);

    printf("Enter Computer Marks: ");
    scanf("%f", &s.computer);

    s.total = s.english + s.maths + s.science + s.social + s.computer;
    s.percentage = s.total / 5;
    s.grade = calculateGrade(s.percentage);

    printf("\n==============================================");
    printf("\n              STUDENT MARKSHEET");
    printf("\n==============================================");

    printf("\nRoll Number : %d", s.roll);
    printf("\nName        : %s", s.name);

    printf("\n\nSubject\t\tMarks");
    printf("\n---------------------------");
    printf("\nEnglish\t\t%.2f", s.english);
    printf("\nMathematics\t%.2f", s.maths);
    printf("\nScience\t\t%.2f", s.science);
    printf("\nSocial\t\t%.2f", s.social);
    printf("\nComputer\t%.2f", s.computer);

    printf("\n---------------------------");
    printf("\nTotal Marks : %.2f / 500", s.total);
    printf("\nPercentage  : %.2f%%", s.percentage);
    printf("\nGrade       : %c", s.grade);

    if (s.grade == 'F')
        printf("\nResult      : FAIL");
    else
        printf("\nResult      : PASS");

    printf("\n==============================================\n");

    return 0;
}