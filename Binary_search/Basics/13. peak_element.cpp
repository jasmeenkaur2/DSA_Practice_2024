#include <bits/stdc++.h>
using namespace std;

int peak_element(int arr[], int n) {
    int start = 0; 
    int end = n - 1;

    if (n == 1) {
        return 0;
    }

    while (start <= end) {
        int mid = start + (end - start) / 2;

        // Check if mid is the peak element
        bool is_left_ok = (mid == 0 || arr[mid - 1] <= arr[mid]);
        bool is_right_ok = (mid == n - 1 || arr[mid + 1] <= arr[mid]);

        if (is_left_ok && is_right_ok) {
            return mid;
        }

        // If the left neighbor is greater, search left half
        if (mid > 0 && arr[mid - 1] > arr[mid]) {
            end = mid - 1;
        }
        // If the right neighbor is greater, search right half
        else {
            start = mid + 1;
        }
    }

    return -1; // This should never be reached if the input array is non-empty
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 6, 7, 8};
    int n = 9;
    int peak_index = peak_element(arr, n);
    
    if (peak_index != -1) {
        cout << "Peak element at index " << peak_index << " with value " << arr[peak_index] << endl;
    } else {
        cout << "No peak element found." << endl;
    }
    
    return 0;
}
