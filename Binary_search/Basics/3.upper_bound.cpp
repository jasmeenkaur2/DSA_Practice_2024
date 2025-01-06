//In simple terms, **`upper_bound`** in C++ helps you find the first number in a sorted list that is bigger than a given number.
//If it can't find any number that's bigger, it points to the end of the list.

#include <bits/stdc++.h>
using namespace std;

int upper_Bound(int arr[], int n, int key) {
    int start = 0, end = n - 1;
    int ans = n;

    while (start <= end) {
    int  mid = start + (end - start) / 2;
        // maybe an answer
        if (arr[mid] > key) {
           ans =  mid;
            end = mid - 1;
        }
        else {
            start = mid + 1; // look on the right
        }
    }
    return ans;
}

int main()
{
    int arr[] = {3, 5, 8,9,15, 19};
    int n = 5, x = 9;
    int ind = upper_Bound(arr, n, x);
    cout << "The upper bound is the index: " << ind << "\n";
    return 0;
}
