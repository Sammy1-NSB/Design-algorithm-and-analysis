// Q6) Design a C program that runs in
// T(n) = nlog(n) + 5n + 10
// and identify the dominant term.

#include <stdio.h>
#include <math.h>

int main()
{
    int n, j, i;
    int count = 0;

    printf("Enter n : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j = j * 2)
        {
            count++;
        }
    }

    for(i = 0; i < 5 * n; i++)
    {
        count++;
    }

    for(i = 0; i < 10; i++)
    {
        count++;
    }

    printf("Total operation executed : %d\n", count);

    return 0;
}