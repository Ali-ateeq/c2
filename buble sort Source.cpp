#include<iostream>
using namespace std;

bool ascending(int, int);
bool descending(int, int);
void swap(int*, int*);
void bubbleSort(int*, const int, bool (*)(int, int));

void main()
{
	const int size = 5;
	int A[size] = { 5,1,7,2,4 };

	int order;
	cout << "Enter the order for sorting (0) for ascending and (1) for descending";
	cout << endl;

	cin >> order;

	if (order == 0)
		bubbleSort(A, size, ascending);
	else
		bubbleSort(A, size, descending);

	for (int i = 0; i < size; i++)
		cout << A[i] << " ";
}
bool ascending(int a, int b)
{
	return (a > b);
}

bool descending(int a, int b)
{
	return (b > a);

}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int* ptr, const int size, bool (*compare)(int, int))
{
	for (int pass = 1; pass < size; pass++)
		for (int i = 0; i < size - 1; i++)
		{
			if ((*compare)(ptr[i], ptr[i + 1]))
				swap(&ptr[i], &ptr[i + 1]);
		}

}
