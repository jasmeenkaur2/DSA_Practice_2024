#include <bits/stdc++.h>
using namespace std;

bool rotated_element(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            return true;
        }

        // If the left half is sorted
        if (arr[start] <= arr[mid]) {
            // Check if the key is in the left half
            if (arr[start] <= key && key < arr[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        // If the right half is sorted
        else {
            // Check if the key is in the right half
            if (arr[mid] < key && key <= arr[end]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }

    return false;  // If the key is not found
}

int main() {
    int nums[] = {4, 5, 6, 7, 0, 1, 2, 3};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 0;

    int result = rotated_element(nums, n, k);
    if(result == 1) {
        cout << "Element is present";
    } else {
        cout << "Element not found.";
    }

    return 0;
}
