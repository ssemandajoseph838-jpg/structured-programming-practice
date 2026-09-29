#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Even numbers from 2 to 20:\n");

    for (number = 2; number <= 20; number += 2)
    {
        printf("%d ", number);
    }

    printf("\n");

    return 0;
}
