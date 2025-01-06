#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
 deque <int> dq;

 dq.push_back(4);
 dq.emplace_back(5);
 dq.push_front(3);
 dq.emplace_front(2);

 cout<< dq.back()<<endl;
 cout<< dq.front()<<endl;

 dq.pop_back();
 dq.pop_front();

 for(auto value:dq){
    cout<<value<<" ";
 }
 
   
}