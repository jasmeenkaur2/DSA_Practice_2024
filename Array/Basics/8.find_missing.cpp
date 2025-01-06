#include<bits/stdc++.h>
using namespace std;

int find_missing(int arr[],int n,int N){
    int s1= 0;
    for(int i = 0;i<n;i++){
        s1 = s1+arr[i];
    }
    
   int  s2 =(N*(N+1))/2;
    
    int missing = s2-s1;
    
    return missing;
}

int main(){
    int arr[] = {1,2,4,5};
    int n = sizeof(arr)/sizeof(arr[1]);
    int N = 5;
    find_missing(arr,n,N);
    cout<<find_missing(arr,n,N);
    
}