#include<bits/stdc++.h>
using namespace std;

int buy_sell(int nums[],int n){
   int max_profit = 0;
   int min_price = INT_MAX;
   
   for(int i= 0; i< n ; i++){
       min_price = min(min_price,nums[i]);
       max_profit = max(max_profit, nums[i]- min_price);
   }
   return max_profit;
}

int main(){
    int nums[] ={7,1,5,3,6,4};
    int n = 6;
    
    cout<<buy_sell(nums,n);
    
}