#include <stdio.h>

int main(void)
{
    int choice, i, mark, total;
    float average;

    do
    {
        printf("\n===== STUDENT MARKS & GRADE SYSTEM =====\n");
        printf("1. Calculate marks and grade\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                total = 0;

                for (i = 1; i <= 5; i++)
                {
                    printf("Enter mark for subject %d (0-100): ", i);
                    scanf("%d", &mark);

                    if (mark < 0 || mark > 100)
                    {
                        printf("Invalid mark. Please run the calculation again.\n");
                        total = -1;
                        break;
                    }

                    total = total + mark;
                }

                if (total != -1)
                {
                    average = total / 5.0;

                    printf("\nTotal marks = %d/500\n", total);
                    printf("Average = %.2f\n", average);

                    if (average >= 90)
                        printf("Grade: A\n");
                    else if (average >= 80)
                        printf("Grade: B\n");
                    else if (average >= 70)
                        printf("Grade: C\n");
                    else if (average >= 50)
                        printf("Grade: D\n");
                    else
                        printf("Result: Fail\n");
                }
                break;

            case 2:
                printf("Thank you for using the system!\n");
                break;

            default:
                printf("Invalid choice. Enter 1 or 2.\n");
        }

    } while (choice != 2);

    return 0;
}
