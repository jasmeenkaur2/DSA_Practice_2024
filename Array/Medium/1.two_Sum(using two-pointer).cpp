// Using two pointers

#include<bits/stdc++.h>
using namespace std;

string two_sum(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    
    sort(arr,arr+n);
    
    while(start<end){
        int sum = arr[start]+arr[end];
        if(sum == target){
            return "YES";
        }
        
        else if(sum<target){
            start ++;
        }
        
        else{
            end--;
        }
    }
    
    return "NO";
}



int main(){
    int arr[]= {6,3,4,1};
    int n = 4;
    int target = 4;
    
   cout<<two_sum(arr,n,target);
   
    return 0;
}