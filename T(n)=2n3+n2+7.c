// Q7) Write a C program that exhibits a time complexity of
// T(n) = 2n³ + n² + 7 and state its overall Big-O complexity.

#include <stdio.h>

int main()
{
    int n, i, j, k;
    int count = 0;

    printf("Enter n : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            for(k = 0; k < n; k++)
            {
                count++;
                count++;
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            count++;
        }
    }

    for(i = 1; i <= 7; i++)
    {
        count++;
    }

    printf("Total operation executed : %d\n", count);

    return 0;
}