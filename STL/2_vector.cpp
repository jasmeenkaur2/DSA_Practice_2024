#include<bits/stdc++.h>
using namespace std;
int main(){
    //vector declaration 
    vector <int> v;
    
    // inserting integers in vector
    v.push_back(5);
    v.emplace_back(6);
    v.push_back(7);
    v.insert(v.begin(),3);
    v.insert(v.begin()+1,4);
    
    //checking the size of vector
    cout<<v.size()<<endl;

    //printing the vector
    /*for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    //printing the vector using iterator
    //iterators point to the memory address where the element is stored.
    for(vector <int> :: iterator it = v.begin(); it != v.end(); it++){
        cout << *(it)<< " "; // here we have used *(dereference)  to print the element without it memmory address will be printed.
    }

    for(auto it:v){// here auto will automatically assign to a vector iterator
        cout<<it<<" ";
    }*/

    //erase function
    v.erase(v.begin()+1,v.begin()+4); // [start,end) last element is not included while erasing means v.begin()+4 will not be erased.    
    for(auto value:v){
        cout<<value<<" ";
    }    

}