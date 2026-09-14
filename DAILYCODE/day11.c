#include <stdio.h>

void sortedSquares(int arr[], int n, int result[]) {
    int left = 0;
    int right = n - 1;
    int pos = n - 1;

    while (left <= right) {
        int leftSquare = arr[left] * arr[left];
        int rightSquare = arr[right] * arr[right];

        if (leftSquare > rightSquare) {
            result[pos] = leftSquare;
            left++;
        } else {
            result[pos] = rightSquare;
            right--;
        }

        pos--;
    }
}

int main() {
    int arr[] = {-7, -3, -1, 4, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result[n];

    sortedSquares(arr, n, result);

    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
