/*
Q4. Write a C program to find maximum profit using
Fractional Knapsack (Greedy Method).
*/

#include <stdio.h>

int main() {
    int n, capacity;

    printf("Enter number of items: ");
    scanf("%d", &n);

    int weight[n], profit[n];
    float ratio[n];

    // Input weights
    printf("Enter weights:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &weight[i]);
    }

    // Input profits
    printf("Enter profits:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &profit[i]);
    }

    printf("Enter knapsack capacity: ");
    scanf("%d", &capacity);

    // Calculate ratio
    for (int i = 0; i < n; i++) {
        ratio[i] = (float)profit[i] / weight[i];
    }

    // Sort by ratio (descending)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ratio[i] < ratio[j]) {
                // Swap ratio
                float temp = ratio[i];
                ratio[i] = ratio[j];
                ratio[j] = temp;

                // Swap weight
                int t = weight[i];
                weight[i] = weight[j];
                weight[j] = t;

                // Swap profit
                t = profit[i];
                profit[i] = profit[j];
                profit[j] = t;
            }
        }
    }

    float totalProfit = 0;
    int remaining = capacity;

    for (int i = 0; i < n; i++) {
        if (weight[i] <= remaining) {
            totalProfit += profit[i];
            remaining -= weight[i];
        } else {
            totalProfit += ratio[i] * remaining;
            break;
        }
    }

    printf("Maximum profit = %.2f\n", totalProfit);

    return 0;
}