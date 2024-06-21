#include <stdio.h>

int birthday_chocolate(int candy[], int n, int day, int month) {
    int count = 0;
    int current_sum = 0;
    for (int i = 0; i < month; i++) {
        current_sum += candy[i];
    }
    if (current_sum == day) {
        count++;
    }
    for (int i = month; i < n; i++) {
        current_sum = current_sum - candy[i - month] + candy[i];

        if (current_sum == day) {
            count++;
        }
    }

    return count;
}

int main() {
    int n, day, month;

    printf("Enter the number of squares in the chocolate bar: ");
    scanf("%d", &n);

    int candy[n];

    printf("Enter the numbers on the chocolate squares: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &candy[i]);
    }

    printf("Enter Raju's birth day: ");
    scanf("%d", &day);
    printf("Enter Raju's birth month: ");
    scanf("%d", &month);

    int result = birthday_chocolate(candy, n, day, month);
    printf("Number of ways to divide the bar: %d\n", result);

    return 0;
}
