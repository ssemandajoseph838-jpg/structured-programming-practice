#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int mark1, mark2,mark3,total;
    float average;

    printf("Enter mark for Subject 1: ");
    scanf("%d", &mark1);

    printf("Enter mark for Subject 2: ");
    scanf("%d", &mark2);

    printf("Enter mark for Subject 3: ");
    scanf("%d", &mark3);

    total = mark1 + mark2 + mark3;
    average = total / 3.0;

    printf("\nTotal mark: %d\n", total);
    printf("Average mark: %.2f\n", average);

    return 0;
}
