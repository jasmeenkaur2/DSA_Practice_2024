//Optimal approach using sliding window
#include<bits/stdc++.h>
using namespace std;

int longest_subarray(int arr[],int n, int k){
 
        int start = 0;
       int longest = 0;
        int sum = 0;
        
        for(int end = 0; end<n; end++){
            sum += arr[end];
            
            while(sum >k && start <= end){
                sum -= arr[start];
                start++;
            }
            
            if(sum == k){
               longest = max(longest, end-start +1);
            }
        }
   
    return longest;
} 


int main() {
    
    int arr[] = {2,3,5,2,2,1,1,1,1,1};
    int n = 10;
    int k = 5;
    
    cout<< longest_subarray(arr,n,k);
    
    
   
    return 0;
}


// brute force pproach using nested for loop( complicated and zero array elements case in not handeled)
// int longestSubarrayWithSumK(vector<int> a, long long k) {
//    int maxi = 0;
//     int sum = 0;
//     int longest = 0;
//     int n=a.size();
//     for(int i = 0; i<n;i++){
//         sum=a[i];
//         if (sum == k) {
//             maxi=1;
//           longest = max(maxi, longest);
//         }
//         for (int j = i+1; j<n;j++){
            
//             // sum = sum+arr[j];
//             if(sum <k ){
//                 // cout<<"in the less sum block "<<sum<<" i="<<i<<" j="<<j<<endl;
//                 sum += a[j];
//                 // cout<<"iupdate sum :::::::::: "<<sum<<" i="<<i<<" j="<<j<<endl;
//                if(sum == k){
//                 maxi = j-i+1;
//                 longest = max(maxi,longest);
//                 // cout<<longest<<" i="<<i<<" j="<<j<<endl;
//             } 
//             }
//             // else {
//             //     // cout<<"in the continue block "<<longest<<" i="<<i<<" j="<<j<<endl;
//             //     continue;}
//         }
//     }
    
//     return longest;
// }