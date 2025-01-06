#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int n){
    for(int i = 0; i<n;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    
    return true;
}
int main() {
   int arr1[] = {2,5,1,4,7};
   int arr_size = sizeof(arr1)/sizeof(arr1[0]);
   cout << sorted(arr1,arr_size);
}