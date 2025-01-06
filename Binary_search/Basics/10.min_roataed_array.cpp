#include <bits/stdc++.h>
using namespace std;

int min_rotated_element(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    int ans = INT_MAX;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        
        if(arr[start] <= arr[end]){ // means array is sorted and first element is the smallest
        
        ans = min(ans,arr[start]);
        break;
            
        }
        
        if(arr[start]<= arr[mid]){//means left side is sorted we are in left side
            ans = min(arr[start],ans);
            
            start = mid + 1; // for jumping to the right side
            
        }
        
        else{
            ans = min(arr[mid],ans);
            
            end = mid - 1;// for jumping to tthe left side
        }
    }

    return ans;
}

int main() {
    int nums[] = {4, 5, 6, 7, 0, 1, 2, 3};
    int n = sizeof(nums) / sizeof(nums[0]);

   cout<< min_rotated_element(nums,n);

    return 0;
}
