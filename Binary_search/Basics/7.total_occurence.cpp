#include <bits/stdc++.h>
using namespace std;

// Function to find the first occurrence of the key
int first_occurrence(int arr[], int n, int key) {
    int start = 0, end = n - 1;
    int ans = -1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;
        
        if (arr[mid] == key) {
            ans = mid;  // Found a match, but continue to search left
            end = mid - 1;
        } 
        else if (arr[mid] > key) {
            end = mid - 1;
        } 
        else {
            start = mid + 1;
        }
    }
    
    return ans;
}

// Function to find the last occurrence of the key
int last_occurrence(int arr[], int n, int key) {
    int start = 0, end = n - 1;
    int ans = -1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;
        
        if (arr[mid] == key) {
            ans = mid;  // Found a match, but continue to search right
            start = mid + 1;
        } 
        else if (arr[mid] > key) {
            end = mid - 1;
        } 
        else {
            start = mid + 1;
        }
    }
    
    return ans;
}

// Function to count total occurrences of the key
int total_occurrence(int arr[], int n, int key) {
    int first = first_occurrence(arr, n, key);
    if (first == -1) {
        return 0;  // Key not found
    }
    int last = last_occurrence(arr, n, key);
    
    return last - first + 1;  // Count of occurrences
}

int main() {
    int arr[] = {3, 4, 13, 13, 13, 20, 40};
    int n = 7, key = 13;
    cout << "Total occurrences of " << key << " is: " << total_occurrence(arr, n, key) << endl;
    return 0;
}
