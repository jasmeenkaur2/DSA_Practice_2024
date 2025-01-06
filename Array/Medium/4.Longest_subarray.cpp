#include<bits/stdc++.h>
using namespace std;

int sum_longest_subarray(int nums[],int n){
    int sum = 0;
    int maxi = 0;
    for(int i = 0; i<n; i++){
        sum += nums[i];
        
        if(sum>maxi){
            maxi = sum;
        }
        
        if(sum <0){
            sum = 0;
        }
    }
    return maxi;
}

int main(){
    int nums[] ={-2,1,-3,4,-1,2,1,-5,4};
    int n = 9;
    
    cout<<sum_longest_subarray(nums,n);
    
}

/*WHY INT_MIN??????
If you didn't start with INT_MIN, you might accidentally skip over the real maximum number
if it's smaller than your starting point. Starting with INT_MIN ensures that the very first 
number you compare will always replace it, getting you closer to the correct answer.*/