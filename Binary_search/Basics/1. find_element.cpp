#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n,int key){
    int start = 0;
    int end = n-1;

    while(start<=end){
        int mid = start+(end - start)/2;
        
        if(arr[mid] == key){
            return mid;
        }
        
        else if(arr[mid]> key){
            end = mid - 1;
        }
        
        else if(arr[mid]<key){
            start = mid + 1;
        }
    }
    return -1;
}


int main() {
    int arr [] = {1,2,3,4,5};
    int n = 5;
    int key = 4;
    
    cout << binary_search(arr,n,key);

    return 0;
}