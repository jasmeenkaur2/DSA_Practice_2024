#include <bits/stdc++.h>
using namespace std;

int single_occurence(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid;
    
    while(start <= end){
        mid = start + (end - start)/2;
        
        if(arr[mid -1]!= arr[mid] && arr [mid] != arr [mid + 1]){
            return mid;
        }
        
        else if(mid%2 == 0 && arr[mid] == arr [mid+1] || mid % 2 == 1 && arr[mid] == arr[mid - 1]){
            start = mid + 1;
        }
        
        else {
            end = mid -1;
        }
    }
    return mid;
}

int main() {
    int arr[] = {1,1,2,2,3,4,4,5,5};
    int n = 9;
    
    cout << single_occurence(arr,n);
}