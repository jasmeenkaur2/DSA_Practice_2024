// approach1: using map
#include<bits/stdc++.h>
using namespace std;

vector <int> find_union(int arr1[], int arr2[], int n, int m){
    vector <int> union1;
    map <int,int> freq;
    
    for(int i = 0; i<n;i++){
        freq[arr1[i]]++;
    }
    
    for(int i = 0; i<m;i++){
        freq[arr2[i]]++;
    }
    
    for(auto it:freq){
        union1.push_back(it.first);
    }
    
    return union1;
}


int main() {
    
    int arr1[] = {2,3,4,5};
    int arr2[] = {1,2,3,4};
    int n = 4;
    int m = 4;
    
    vector<int> uni = find_union(arr1,arr2,n,m);
    
    for(auto &val:uni){
        
        cout<< val<<" ";
        
    }
   
    return 0;
}

// using set

