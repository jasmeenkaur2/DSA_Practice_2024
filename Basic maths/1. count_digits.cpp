#include <bits/stdc++.h>
using namespace std;

int count_digit(int n){
    int count = 0;
    
    while(n>0){
        count++;
        n = n/10;
    }
    
    return count;
}

int main(){
    int n = 1234;
    
    cout <<count_digit(n);
}