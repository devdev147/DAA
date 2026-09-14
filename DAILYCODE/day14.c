#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n, m;

    printf("Enter size of arr1: ");
    scanf("%d", &n);

    int arr1[n];

    printf("Enter arr1 elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of arr2: ");
    scanf("%d", &m);

    int arr2[m];

    printf("Enter arr2 elements: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    // Sort both arrays
    qsort(arr1, n, sizeof(int), compare);
    qsort(arr2, m, sizeof(int), compare);

    int i = 0, j = 0;
    int minDiff = abs(arr1[0] - arr2[0]);

    while (i < n && j < m) {

        int diff = abs(arr1[i] - arr2[j]);

        if (diff < minDiff) {
            minDiff = diff;
        }

        if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }

    printf("Smallest difference = %d\n", minDiff);

    return 0;
}
