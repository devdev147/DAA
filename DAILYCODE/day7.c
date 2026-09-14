#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int left = 0;
    int right = n - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        // Make mid even
        if (mid % 2 != 0) {
            mid--;
        }

        if (arr[mid] == arr[mid + 1]) {
            // Single element is on the right
            left = mid + 2;
        } else {
            // Single element is on the left or at mid
            right = mid;
        }
    }

    printf("Single element = %d\n", arr[left]);

    return 0;
}
