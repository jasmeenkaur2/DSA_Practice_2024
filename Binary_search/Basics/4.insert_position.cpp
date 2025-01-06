#include <bits/stdc++.h>
using namespace std;

int insert_position(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int ans = n;
    int mid;
    
    while(start <= end){
        mid = start + (end - start)/2;
        
        if(arr[mid]>=key){
            ans =  mid;
            
            end = mid - 1;
        }
        
        else if(arr[mid]<key){
            start = mid +1;
        }
    }
        return ans;
}

int main() {
    int arr[] = {1,2,3,4,6};
    int n = 5;
    int key = 5;
    
    cout << insert_position(arr,n,key);
}