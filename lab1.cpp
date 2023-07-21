#include <iostream>
using namespace std;
int** create_matrix(int r, int c)
{
    int** matrix = new int*[r];
    for (int i = 0; i < r; i++)
    {
        matrix[i] = new int[c];
    }
    return matrix;
}
void fill_matrix(int** matrix, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter the value for [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}
void display_matrix(int** matrix, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
bool is_diagonal_matrix(int** matrix, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i != j && matrix[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int r, c;
    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;
    int** matrix = create_matrix(r, c);
    fill_matrix(matrix, r, c);
    cout << "Matrix:" << endl;
    display_matrix(matrix, r, c);
    if (is_diagonal_matrix(matrix, r, c))
    {
        cout << "The matrix is a diagonal matrix." << endl;
    }
    else
    {
        cout << "The matrix is not a diagonal matrix." << endl;
    }
    for (int i = 0; i < r; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}