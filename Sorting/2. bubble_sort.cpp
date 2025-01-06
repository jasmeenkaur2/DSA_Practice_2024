#include <bits/stdc++.h>
using namespace std;

vector <int> bubble_sort(vector<int> arr, int n){
    
   for(int i = 0; i<n; i++){
       for(int j = 0; j < n-i-1; j++){
           if(arr[j]>arr[j+1]){
               swap(arr[j],arr[j+1]);
           }
       }
   }
    
    return arr;
}

int main() {
    vector<int> arr = {2,5,3,1,7};
    int n = 5;
    
    vector<int> result = bubble_sort(arr,n);
    
    for(int i = 0; i<n; i++){
        cout<<result[i]<<endl;
    }

    return 0;
}