#include <iostream>

using namespace std;

void insersion_sort(int* out_arr, int size)
{
	for (int i = 1; i < size; ++i)
	{
		int key = out_arr[i];
		int j = i - 1;
		while (j >= 0 && out_arr[j] > key)
		{
			out_arr[j + 1] = out_arr[j];
			--j;
		}

		out_arr[j + 1] = key;
	}
}

void selection_sort(int* out_arr, int size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		int minIndex = i;
		for (int j = i + 1; j < size; ++j)
		{
			if (out_arr[j] < out_arr[minIndex])
			{
				minIndex = j;
			}
		}

		swap(out_arr[i], out_arr[minIndex]);
	}
}

int main()
{
	int arr[] = { 3, 8, 1, 4, 6, 5, 3, 2, 9, 7 };
	int size = sizeof(arr) / sizeof(int);

	//insersion_sort(arr, size);
	selection_sort(arr, size);
	
	cout << "Sorted Result = (";
	for (int i = 0; i < size - 1; ++i)
	{
		cout << arr[i] << ", ";
	}
	cout << arr[size - 1] << ")" << endl;

	system("pause");

	return 0;
}