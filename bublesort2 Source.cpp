#include <iostream>
using namespace std;

void printArray(const int*, const int);
void bubbleSort(int*, const int);
void swap(int* const, int* const);


void main()
{
	const int size = 6;
	int Array[size] = { 2,9,5,4,8,1 };

	printArray(Array, size);
	bubbleSort(Array, size);
	printArray(Array, size);

}
void printArray(const int*p, const int size)
{

	for (int i = 0; i < size; i++)
		cout << *(p + i) << " ";

	cout << endl;

}
void bubbleSort(int*A, const int size)
{
for (int pass = 1; pass < size; pass++)
	for (int i = 0; i < size - 1; i++)
		if (A[i] > A[i + 1])
			swap(&A[i], &A[i + 1]);
}
void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}