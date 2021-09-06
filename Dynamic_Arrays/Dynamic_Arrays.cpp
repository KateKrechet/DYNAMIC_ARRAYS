#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n] {};
	/*int* brr = new int[count_even] {};
	int* crr = new int[count_odd] {};*/
	int count_even = 0, count_odd = 0;

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		if (arr[i] % 2 == 0)
		{
			count_even ++;
			/*for (int j = 0; j < count_even; j++)
			{
				brr[j] = arr[i];
			}*/
		}
		else
		{
			count_odd++;
			/*for (int k = 0; k < count_odd; k++)
			{
				crr[k] = arr[i];
			}*/
		}
	}


	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	delete[] arr;
	/*for (int j = 0; j < count_even; j++)
	{
		cout << brr[j] << "\t";
	}
	cout << endl;
	delete[] brr;
	for (int k = 0; k < count_odd; k++)
	{
		cout << crr[k] << "\t";
	}
	cout << endl;
	delete[] crr;*/
	cout << "Количество четных элементов массива " << count_even << endl;
	cout << "Количество нечетных элементов массива " << count_odd << endl;

}

