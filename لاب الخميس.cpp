#include <iostream>
using namespace std;
// Function to print the identity matrix
void printIdentity(int** matrix, int rows, int cols) {
    cout << "Identity Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == j)
                cout << "1 ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

// Function to print the transpose of the matrix
void printTranspose(int** matrix, int rows, int cols) {
    cout << "Transpose Matrix:" << endl;
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int** matrix = new int* [rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element (" << i << ", " << j << "): ";
            cin >> matrix[i][j];
        }
    }

    printIdentity(matrix, rows, cols);

    printTranspose(matrix, rows, cols);

    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}