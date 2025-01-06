#include <bits/stdc++.h>
using namespace std;

vector <int> selection_sort(vector<int> arr, int n){
    
    for(int i = 0; i<n; i++){
        int mini = i;
        for(int j = i+1; j<n;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
      swap(arr[i],arr[mini]);  
    }
    
    return arr;
}

int main() {
    vector<int> arr = {2,5,3,1,7};
    int n = 5;
    
    vector<int> result = selection_sort(arr,n);
    
    for(int i = 0; i<n; i++){
        cout<<result[i]<<endl;
    }

    return 0;
}