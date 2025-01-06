#include<bits/stdc++.h>
using namespace std;

//OUTPUT WILL BE YES/NO
// string two_sum(int arr[],int n, int target){
//     for(int i =0; i<n; i++){
//         for(int j = i+1 ;j<n;j++){
//             if(arr[i]+arr[j] == target){
//                 return "YES";
//             }
//         }
//     }
//     return "NO";
// }

//OUTPUT WILL BE A PAIR OF INDEXES OR {-1,-1}

pair <int,int> two_sum(int arr[],int n, int target){
    pair<int,int> p;
    for(int i =0; i<n; i++){
        for(int j = i+1 ;j<n;j++){
            if(arr[i]+arr[j] == target){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}


int main(){
    int arr[]= {6,3,4,1};
    int n = 4;
    int target = 4;
    
    // for yes/no case
    //cout<<two_sum(arr,n,target);
    
    //FOR PAIR
    pair<int, int> result = two_sum(arr, n, target);

    if (result.first != -1) {
        cout << "Indices: " << result.first << ", " << result.second << endl;
    } else {
        cout << "No pair found" << endl;
    }

    return 0;
}