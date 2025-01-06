#include <bits/stdc++.h>
using namespace std;

int reverse_digit(int n){
    int r = 0;
    int digit = 0;
    
    while(n>0){
        
        digit = n%10;
        
        r = r*10 +digit;
        
        n = n/10;
       
    }
    
    return r;
}

int main(){
    int n = 1234;
    
    cout <<reverse_digit(n);
}