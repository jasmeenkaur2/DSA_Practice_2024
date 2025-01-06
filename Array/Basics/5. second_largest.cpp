#include<bits/stdc++.h>
using namespace std;
int SLargest_Element(int arr[],int n){
    int largest = arr[0];
    int second_largest = arr[0];
    for(int i = 1;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
        
        else if(arr[i]>second_largest && arr[i]< largest)
{
    second_largest = arr[i];
}    }
    return second_largest;
}
int main() {
   int arr1[] = {2,5,7,1,4,7};
   int arr_size = sizeof(arr1)/sizeof(arr1[0]);
   cout << SLargest_Element(arr1,arr_size);
}