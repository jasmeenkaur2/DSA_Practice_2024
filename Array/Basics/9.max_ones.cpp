#include<bits/stdc++.h>
using namespace std;

int max_ones(int arr[],int n){
    int maxi = 0;
    int count = 0;
   for(int i=0;i<n;i++){
       if(arr[i] ==1){
           count++;
       }
       else{
           count = 0;
       }
       maxi = max(count,maxi);
   }
   return maxi;
}

int main(){
    int arr[] = {1,0,1,1,0,0,1,1,1,0,0,1};
    int n = sizeof(arr)/sizeof(arr[1]);
    cout<<max_ones(arr,n);
    
    
}