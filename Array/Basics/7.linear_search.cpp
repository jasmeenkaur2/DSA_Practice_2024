#include<bits/stdc++.h>
using namespace std;

bool is_Present(int arr[],int key,int n){
    
    for(int i = 0; i<n;i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}


int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[1]);
    int key1 = 2;
    int key2 = 9;
    is_Present(arr,key1,n);
    cout<<is_Present(arr,key1,n)<<endl;
    
    is_Present(arr,key2,n);
    cout<<is_Present(arr,key2,n)<<endl;
    
}