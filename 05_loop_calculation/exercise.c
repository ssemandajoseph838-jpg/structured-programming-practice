#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int sum = 0;

    for (number = 5; number <= 50; number += 5)
    {
        sum = sum + number;
    }

    printf("The sum of multiples of 5 from 5 to 50 is %d\n", sum);

    return 0;
}
