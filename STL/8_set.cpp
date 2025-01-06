#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
 set<int> s;
 s.insert(1);
 s.insert(2);
 s.emplace(1);
 s.insert(3);
 s.insert(4);

 auto number = s.find(6);


 int cnt = s.count(1);
 cout<<cnt<<endl;
}