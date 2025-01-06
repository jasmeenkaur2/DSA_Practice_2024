#include<bits/stdc++.h>
using namespace std;
void Remove_Duplicates(int (&arr)[10]){
    int i = 0;
    for(int j = i+1;j<10;j++){
        if(arr[j]!= arr[i]){
            swap(arr[i+1],arr[j]);
            i++;
        }
    }
}
int main() {
   int arr[] = {1,1,2,2,2,3,3,4,4,4};
   Remove_Duplicates(arr);
   for(int i=0; i<10; i++){
       cout<<arr[i]<<" ";
   }
   
   return 0;
}