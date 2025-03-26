#include <functional>
#include <iostream>
#include <climits>
using namespace std;
// using namespace string;

const int MAX = 100;

void transpose(int mat[MAX][MAX],int transposed[MAX][MAX],int rows, int cols) {
    for (int i = 0; i < rows;i++) {
        for (int j = 0; j < cols;j++) {
            transposed[j][i] = mat[i][j];
        }

    }
}

void printMatrix(int mat[MAX][MAX],int rows, int cols) {
    for (int i = 0; i < rows;i++) {
        for (int j = 0;j < cols;j++) {
            cout<< mat[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int mat[MAX][MAX], tranposed[MAX][MAX];
    int rows,cols;

    // Input the dimensions of the matrix
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> rows >> cols;

    // Input the matrix elements
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0;i < rows;i++) {
        for (int j = 0;j < cols; j++) {
            cin >> mat[i][j];
        }
    }

    // compute the transpose
    transpose(mat,tranposed,rows,cols);

    // Output the original matrix

    cout << "Original Matrix: "<< endl;
    printMatrix(mat,rows,cols);

    // Output the transposed matrix

    cout << "Transposed Matrix: " << endl;
    printMatrix(tranposed,rows,cols);

    // string input;
    // // Get the input from the user
    // cout << "Enter a string: ";
    // getline(cin,input);



    return 0;


}

