#include <stdio.h>

int main()
{
    int marks[5];
    int total = 0;
    int min, max;
    float percentage;
    char grade;

    // Taking marks input
    printf("Enter marks for 5 subjects:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        total = total + marks[i];
    }

    // Finding minimum and maximum with
    min = marks[0];
    max = marks[0];

    for (int i = 1; i < 5; i++)
    {
        if (marks[i] < min)
        {
            min = marks[i];
        }

        if (marks[i] > max)
        {
            max = marks[i];
        }
    }

    // Calculate percentage
    percentage = total / 5.0;

    // Check Result
    int pass = 1;

    for (int i = 0; i < 5; i++)
    {
        if (marks[i] < 35)
        {
            pass = 0;
            break;
        }
    }

    // Grade
    if (pass == 0)
    {
        grade = 'F';
    }
    else if (percentage >= 90)
    {
        grade = 'A';
    }
    else if (percentage >= 80)
    {
        grade = 'B';
    }
    else if (percentage >= 70)
    {
        grade = 'C';
    }
    else if (percentage >= 60)
    {
        grade = 'D';
    }
    else if (percentage >= 50)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }

    // Display result
    printf("\n========== STUDENT RESULT ==========\n");

    printf("Subject 1 : %d\n", marks[0]);
    printf("Subject 2 : %d\n", marks[1]);
    printf("Subject 3 : %d\n", marks[2]);
    printf("Subject 4 : %d\n", marks[3]);
    printf("Subject 5 : %d\n", marks[4]);

    printf("------------------------------------\n");
    printf("Total      : %d / 500\n", total);
    printf("Percentage : %.2f%%\n", percentage);
    printf("Minimum    : %d\n", min);
    printf("Maximum    : %d\n", max);

    if (pass == 1)
    {
        printf("Result     : PASS\n");
    }
    else
    {
        printf("Result     : FAIL\n");
    }

    printf("Grade      : %c\n", grade);

    printf("====================================\n");

    return 0;
}
