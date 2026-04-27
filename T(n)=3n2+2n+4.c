// Q4) Write a C program whose time complexity is exactly
// T(n) = 3n² + 2n + 4

#include <stdio.h>

int main()
{
    int n;

    printf("Enter n : ");
    scanf("%d", &n);

    int count = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            count++;
            count++;
            count++;
        }
    }

    for(int i = 0; i < n; i++)
    {
        count++;
        count++;
    }

    count++;
    count++;
    count++;
    count++;

    printf("Total operation executed : %d\n", count);

    return 0;
}