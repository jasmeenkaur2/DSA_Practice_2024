#include <bits/stdc++.h>
using namespace std;

void freq(int arr[], int n){
    unordered_map <int,int> m;
     int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;
    
    for(int i = 0; i<n; i++){
        m[arr[i]]++;
    }
    
    for(auto it:m){
         int count = it.second;
        int element = it.first;

        if (count > maxFreq) {
            maxEle = element;
            maxFreq = count;
        }
        if (count < minFreq) {
            minEle = element;
            minFreq = count;
        }
    }
     cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";
}

int main(){
    int arr[] = {1,2,1,1,2,2,2,3,3,2,3,5};
    int n = 12;
    
    freq(arr,n);
}