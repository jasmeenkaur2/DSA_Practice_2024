/*What is the floor of x?
The floor of x is the largest element in the array which is smaller than or equal to x( i.e. largest element in the array <= x).

What is the ceiling of x?
The ceiling of x is the smallest element in the array greater than or equal to x( i.e. smallest element in the array >= x).*/

#include <bits/stdc++.h>
using namespace std;

pair<int,int> floor_ceil(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int arr_ceil;
    int arr_floor;
    int mid;
    
    while(start <= end){
        mid = start + (end - start)/2;
        
        if(arr[mid]>=key){
            arr_ceil=  arr[mid];
            
            end = mid - 1;
        }
        
        else if(arr[mid]<=key){
            arr_floor = arr[mid];
            start = mid +1;
        }
    }
        return make_pair(arr_floor,arr_ceil);
}

int main() {
    int arr[] = {3, 4, 4, 7, 8, 10};
	int n = 6, key = 5;
    pair<int, int> ans = floor_ceil(arr, n, key);
	cout << "The floor and ceil are: " << ans.first
	     << " , " << ans.second << endl;
    
    
}