#include <bits/stdc++.h>
using namespace std;

vector<int> insertion_sort(vector<int> arr, int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i-1;
        
       while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    return arr;
}


int main() {
    vector<int> arr = {2,5,3,1,7};
    int n = 5;
    
    vector<int> result = insertion_sort(arr,n);
    
    for(int i = 0; i<n; i++){
        cout<<result[i]<<endl;
    }

    return 0;
}