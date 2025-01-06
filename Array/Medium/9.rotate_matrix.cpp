#include<bits/stdc++.h>  // Including all standard libraries in one header file (not recommended for production code)

using namespace std;

void rotate(vector<vector<int>> &matrix) {
    int n = matrix.size();  // Get the size of the matrix (n x n)

    // Step 1: Transpose the matrix (swap rows with columns)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            // Swap elements at position (i, j) and (j, i)
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse each row of the matrix to get the 90-degree rotation
    for (int i = 0; i < n; i++) {
        // Reverse each row of the matrix
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {
    // Initializing a 3x3 matrix (2D vector)
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Calling the rotate function to rotate the matrix 90 degrees clockwise
    rotate(arr);

    // Outputting the rotated matrix
    cout << "Rotated Image" << endl;
    for (int i = 0; i < arr.size(); i++) {  // Loop through each row
        for (int j = 0; j < arr[0].size(); j++) {  // Loop through each column
            cout << arr[i][j] << " ";  // Print each element
        }
        cout << endl;  // Move to the next line after each row
    }
}
