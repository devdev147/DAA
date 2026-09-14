#include <stdio.h>

int main() {
    int arr[] = {1, 1, 0, 1, 1, 1};
    int n = 6;

    int ones = 0, zeros = 0;
    int count = 0, maxCount = 0;

    for (int i = 0; i < n; i++) {

        if (arr[i] == 1) {
            ones++;
            count++;

            if (count > maxCount) {
                maxCount = count;
            }
        }
        else {
            zeros++;
            count = 0;
        }
    }

    printf("a. Number of 1 = %d\n", ones);
    printf("   Number of 0 = %d\n", zeros);
    printf("b. Consecutive 1s = %d\n", maxCount);

    return 0;
}
