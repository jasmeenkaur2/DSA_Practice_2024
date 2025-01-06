//First approach by Comparing all th elements
#include<bits/stdc++.h>
using namespace std;
int Largest_Element(int arr[],int n){
    int largest = arr[0];
    for(int i = 1;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}
int main() {
   int arr1[] = {2,5,1,4,7};
   int arr_size = sizeof(arr1)/sizeof(arr1[0]);
   cout << Largest_Element(arr1,arr_size);
}

//Second approach using sort

#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int Largest_Element(int arr[],int n){
    sort(arr,arr+n);
    return arr[n-1];
}
int main() {
   int arr1[] = {2,5,1,4,7};
   int arr_size = sizeof(arr1)/sizeof(arr1[0]);
   cout << Largest_Element(arr1,arr_size);
}