//using dutch national flag algorithm

//The Dutch National Flag Algorithm, also known as the DNF algorithm or the Three-Way Partitioning Algorithm,
//is a simple and efficient approach to sorting an array containing three distinct elements.

#include<bits/stdc++.h>
using namespace std;

void sort_numbers(int arr[], int n){
    int start = 0;
    int mid = 0;
    int end = n-1;
    
    while(mid<=end){
        if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==0){
            swap(arr[start],arr[mid]);
            start++;
            mid++;
        }
        
        else{
            swap(arr[mid],arr[end]);
            end--;
        }
    }
}

int main() {
    int arr[] = {0,1,2,1,0,1};
    int n = 6;
    
    sort_numbers(arr,n);
    
    for(int i = 0; i<n;i++){
        cout<< arr[i]<<" ";
    }

    return 0;
}