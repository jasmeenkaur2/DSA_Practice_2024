//approach 1 - right rotation using temp array

#include<bits/stdc++.h>
using namespace std;

void right_Rotate(int arr[], int n, int k) {
    // Handle cases where k is greater than n
    k = k % n;

    int temp[k];
    
    // Copy the last k elements to the temp array
    for(int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    
    // Shift the rest of the elements in the original array to the right
    for(int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    
    // Copy the k elements back to the front
    for(int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 2;
    
    right_Rotate(arr, n, k);
    
    // Print the rotated array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}

//approach 2 using reverse algorithm

#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end){
    while(start<=end){
        int temp = arr[start];
        arr[start]= arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void right_Rotate(int arr[], int n, int k) {
   reverse(arr,0,n-k-1);
   reverse(arr,n-k,n-1);
   reverse(arr,0,n-1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 2;
    
    right_Rotate(arr, n, k);
    
    // Print the rotated array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}