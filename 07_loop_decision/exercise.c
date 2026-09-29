#include <stdio.h>
#include <stdlib.h>

int main()
{
    int student,mark, failcount =0,  passCount = 0;

    for (student = 1; student <= 5; student++)
    {
        printf("Enter mark for student %d: ", student);
        scanf("%d", &mark);

        if (mark >= 50)
        {
            printf("Student %d passed.\n", student);
            passCount++;
        }
        else
        {
            printf("Student %d failed.\n", student);
            failCount++;
        }
    }

    printf("\nTotal passed: %d\n", passCount);
    printf("Total failed: %d\n", failCount);

    return 0;
}
