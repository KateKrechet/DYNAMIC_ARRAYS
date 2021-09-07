#include <iostream>
using namespace std;

void Print(int arr[], const unsigned int n);

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n] {};
	int count_even = 0, count_odd = 0;

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		(arr[i] % 2 == 0) ? count_even++ : count_odd++;

	}
	Print(arr, n);
	cout << "Количество четных элементов массива " << count_even << endl;
	cout << "Количество нечетных элементов массива " << count_odd << endl;
	int* brr = new int[count_even] {};
	int* crr = new int[count_odd] {};
	count_even = 0;
	count_odd = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			brr[count_even] = arr[i];
			count_even++;
		}

		else
		{
			crr[count_odd] = arr[i];
			count_odd++;
		}
	}
	delete[] arr;
	cout << "Вывод четных элементов массива" << endl;
	Print(brr, count_even);
	delete[] brr;
	cout << "Вывод нечетных элементов массива" << endl;
	Print(crr, count_odd);
	delete[] crr;
}
void Print(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

