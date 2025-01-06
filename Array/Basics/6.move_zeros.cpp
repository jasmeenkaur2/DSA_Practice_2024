// method 1: by pre assign the vector array to 0
#include<bits/stdc++.h>
using namespace std;

int move_zeros(int arr[],int n){
    vector <int> temp (6,0);
    int j = 0;
    for(int i = 0; i<n;i++){
        if(arr[i]!=0){
            temp[j] = arr[i];
            j++;
        }
    }
    
     for(int i = 0; i<6;i++){
        cout<< temp[i]<<" ";
    }
   return 0;
}

int main() {
    int arr[] = {1,2,0,3,0,4};
    int n = sizeof(arr)/sizeof(arr[2]);
    move_zeros(arr,n);
}

//Method 2: by simply declaring a vector array and pushing values into it.