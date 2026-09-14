#include <stdio.h>

int main() {
    int m, n;

    printf("Enter size of nums1: ");
    scanf("%d", &m);

    int nums1[m];

    printf("Enter sorted nums1: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    printf("Enter size of nums2: ");
    scanf("%d", &n);

    int nums2[n];

    printf("Enter sorted nums2: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    int total = m + n;
    int i = 0, j = 0;
    int prev = 0, current = 0;

    // Find elements up to the middle
    for (int k = 0; k <= total / 2; k++) {
        prev = current;

        if (i < m && (j >= n || nums1[i] <= nums2[j])) {
            current = nums1[i];
            i++;
        } else {
            current = nums2[j];
            j++;
        }
    }

    if (total % 2 == 0) {
        printf("Median = %.2f\n", (prev + current) / 2.0);
    } else {
        printf("Median = %.2f\n", (double)current);
    }

    return 0;
}
