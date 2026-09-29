#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mark;

    printf("Enter student's mark: ");
    scanf("%d", &mark);

    if (mark >= 50)
    {
        printf("The student passed.\n");
    }
    else
    {
        printf("The student failed.\n");
    }

    return 0;
}
