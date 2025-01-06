#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    /*Max heap
 priority_queue<int> p;
 p.push(1);
 p.push(2);
 p.push(3);
 p.emplace(4);

 cout<<p.top()<<endl;

 p.pop();

 cout<<p.top()<<endl; */

 //min heap

 priority_queue<int,vector<int>,greater<int>> p;
 p.push(1);
 p.push(2);
 p.push(3);
 p.emplace(4);

 cout<<p.top();
   
}