#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
 list <int> ls;
 ls.push_back(4);
 ls.push_back(3);
 ls.push_front(2);
 ls.push_front(1); 

 for(auto value:ls){
    cout<<value<<" ";
 }
   
}