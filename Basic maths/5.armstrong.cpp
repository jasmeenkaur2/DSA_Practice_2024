#include <bits/stdc++.h>
using namespace std;

bool armstrong(int n){
    int temp = n;
    int final = n;
    int count = 0;
    int digit;
    int sum = 0;
    
    while(temp > 0){
        count ++;
        
        temp = temp /10;
    }
    
    while(n>0){
        digit = n % 10;
        sum = sum + pow(digit,count);
        
        n = n/10;
    }
    
    if( final == sum) return true;
    else return false;
}
int main(){
   int n = 153;
    
    cout<<armstrong(n);
}