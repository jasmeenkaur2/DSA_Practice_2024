#include <bits/stdc++.h>
using namespace std;

int last_occurence(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid;
    
    while(start <= end){
        mid = start + (end - start)/2;
        
        if(arr[mid] == key){
            ans = mid;
            start = mid +1;
        }
        
        else if(arr[mid]>key){
            end = mid - 1;
        }
        
        else{
            start = mid + 1;
        }
        
    }    
        
       return ans;
}

int main() {
    int arr[] = {3,4,13,13,13,20,40};
	int n = 7, key = 13;
   cout<<last_occurence(arr,n,key);   
}