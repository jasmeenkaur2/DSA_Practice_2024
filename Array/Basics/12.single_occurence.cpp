// using hash map
#include<bits/stdc++.h>
using namespace std;
 int find_single_occurence (int arr[],int n){
     map <int,int> once;
     
     for(int i = 0; i<n;i++){
         once[arr[i]]++;
     }
     
     for (auto it : once) {
        if (it.second == 1)
            return it.first;
    }
}


int main() {
    
    int arr1[] = {2,3,4,3,4,5,5};
    int n = 7;
    
    cout<< find_single_occurence(arr1,n);
    
    
   
    return 0;
}