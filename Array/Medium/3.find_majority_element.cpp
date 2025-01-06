//Brute-force approach (time limit exceeds)

#include<bits/stdc++.h>
using namespace std;

int find_major(int nums[],int n){
    for(int i = 0; i<n;i++){
        int count = 1;
        for(int j = i + 1; j<n; j++){
            if(nums[i] == nums[j]){
                count++;
            }
        }
       if( count > n/2){
           return nums[i];
       } 
    }
    return -1;
}

int main(){
    int nums[] ={1,1,1,1,1};
    int n = 7;
    
    cout<<find_major(nums,n);
    
}


//Better approach using hashmap time complexity o(n^2)
#include<bits/stdc++.h>
using namespace std;

int find_major(int nums[],int n){
    map<int,int> m;
    for(int i = 0 ; i<n; i++){
        m[nums[i]]++;
    }
    
    for(auto it:m){
        if(it.second > n/2){
            return it.first;
        }
    }
    return -1;
}

int main(){
    int nums[] ={1,2,1,2,1,3,3,3,3,3,3};
    int n = 11;
    
    cout<<find_major(nums,n);
    
}

//Optimal approach using moore's algorithm time complexity o(n)

#include<bits/stdc++.h>
using namespace std;

int find_major(int nums[],int n){
    int count = 0;
    int element ;
    
    for(int i = 0;i<n;i++){
        if(count == 0){
            count = 1;
            element = nums[i];
        }
        
        else if(element == nums[i]){
            count++;
        }
        else{  count--;
    }
  }
   return element;
}

int main(){
    int nums[] ={2,2,1,1,1,2,2};
    int n = 7;
    
    cout<<find_major(nums,n);
    
}