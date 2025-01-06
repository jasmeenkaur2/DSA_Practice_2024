#include <bits/stdc++.h>
using namespace std;

void freq(int arr[], int n){
    unordered_map <int,int> m;
    
    for(int i = 0; i<n; i++){
        m[arr[i]]++;
    }
    
    for(auto it:m){
        cout << it.first <<" "<<it.second<<endl;
    }
}

int main(){
    int arr[] = {1,2,1,1,2,2,2,3,3,2,3,5};
    int n = 12;
    
    freq(arr,n);
}