#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day;
    int hours;

    for (day = 1; day <= 5; day++)
    {
        printf("Enter study hours for day %d: ", day);
        scanf("%d", &hours);

        printf("Day %d study hours: %d\n", day, hours);
    }

    return 0;
}
