#include<bits/stdc++.h>
using namespace std;

vector<int> leaders (vector<int> arr, int n){
    vector<int> ans;
    int maxi = arr[n-1];
    ans.push_back(arr[n-1]);
    
    for(int i = n-1; i>= 0; i--){
        if(arr[i]> maxi){
            ans.push_back(arr[i]);
            maxi = arr[i];
        }
        
    }
    return ans;
}

int main(){
    vector<int> arr = {12,22,12,3,0,6};
    int n=6;
    
    vector<int> ans = leaders(arr,n);
    
    for(int i:ans){
        cout<<i<<endl;
    }
}