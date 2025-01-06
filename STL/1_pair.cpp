#include<bits/stdc++.h>
using namespace std;
int main(){
    // normal pair
    pair <int,int> p = {1,2};
    cout<<p.first<<endl;

    // nested pair

    pair<int, pair<int,int>> p1 = {1,{2,3}};
    cout<<p1.first<<" "<<p1.second.first<<endl;

    //array of pairs

    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
    cout<<arr[1].second<<" "<<arr[2].first;

}