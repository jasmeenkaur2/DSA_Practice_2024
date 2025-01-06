#include<bits/stdc++.h>
using namespace std;
void left_rotate(int (&arr)[10]){
    int temp = arr[0];
    for(int i = 0; i<9;i++){
        arr[i]= arr[i+1];
    }
    
    arr[9] = temp;
}
int main() {
   int arr[] = {1,1,2,2,2,3,3,4,4,4};
   left_rotate(arr);
   for(int i=0; i<10; i++){
       cout<<arr[i]<<" ";
   }
   
   return 0;
}