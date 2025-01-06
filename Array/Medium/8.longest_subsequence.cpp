#include <bits/stdc++.h>
using namespace std;

int longest_subsequence(int arr[], int n){
    sort(arr,arr+n);
    int smallest = INT_MIN;
    int count = 0;
    int largest = 1;
    
    for(int i = 0; i<n; i++){
    if(arr[i]-1 == smallest){
        count ++;
        smallest = arr[i];
    }
    
    else if(arr[i]-1 != smallest){
        smallest = arr[i];
        count = 1;
    }
    largest = max(largest,count);
  }
  return largest;  
}
int main() {
   int arr[]= {1,2,2,1};
   int n = 4;
   
   cout << longest_subsequence(arr,n);
    return 0;
}