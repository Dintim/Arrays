#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int n;
	cout << "введите номер задания: ";
	cin >> n;

	switch (n)
	{
	case 1:
	{
		//Написать программу, которая вводит с клавиатуры одномерный массив из 5 целых чисел, 
		//после чего выводит количество ненулевых элементов. Перед вводом каждого элемента должна выводиться подсказка с номером элемента.

		int a[5];
		int sum = 0;

		for (int i = 1; i <= 5; i++)
		{
			cout << "a[" << i << "]" << " -> ";
			cin >> a[i];

			if (a[i] != 0)
				sum++;
		}
		cout << "В массиве " << sum << " ненулевых элемента" << endl;
	}
	break;

	case 2:
	{
		//Написать программу, которая выводит минимальный элемент введенного с клавиатуры массива целых чисел.

		const int n = 5;
		int a[n];
		int min_val = INT_MAX;

		cout << "Введите в одной строке элементы массива (5 элементов), нажмите Enter: " << endl;
		for (int i = 0; i<n; i++)
		{
			cin >> a[i];
			if (a[i]<min_val)
				min_val = a[i];
		}
		cout << "Минимальный элемент массива: " << min_val;
	}
	break;

	case 3:
	{
		//Написать программу, которая вычисляет среднее арифметическое ненулевых элементов введенного с клавиатуры массива целых чисел. 
		
		const int n = 10;
		int a[n];
		int sumAll = 0, sumNotNull = 0, countNum = 0;

		cout << "Введите в одной строке элементы массива (5 элементов), нажмите Enter: " << endl;
		for (int i = 0; i<n; i++)
		{
			cin >> a[i];
			sumAll += a[i];

			if (a[i] != 0)
			{
				countNum++;
				sumNotNull += a[i];
			}
		}
		cout << "Сумма элементов массива: " << sumAll << endl;
		cout << "Количество ненулевых элементов: " << countNum << endl;
		cout << "Среднее арифметическое ненулевых элементов: " << (double)sumNotNull / countNum << endl;
	}
	break;

	case 4:
	{
		//Написать программу, которая вычисляет среднее арифметическое элементов массива без учета минимального и максимального элементов массива.
		const int n = 10;
		int a[n];
		int minValue = INT_MAX, maxValue = INT_MIN;

		int sum = 0;

		cout << "Введите массив (10 целых чисел в одной строке) -> ";
		for (int i = 0; i<n; i++)
		{
			cin >> a[i];
			sum += a[i];

			if (a[i]<minValue)
				minValue = a[i];
			if (a[i]>maxValue)
				maxValue = a[i];
		}

		cout << "Минимальный элемент: " << minValue << endl;
		cout << "Максимальный элемент: " << maxValue << endl;
		cout << "Среднее арифм. без учета min и max значений: " << (double)(sum - minValue - maxValue) / (n - 2) << endl;
	}
	break;

	case 5:
	{
		//Написать программу, которая проверяет, находится ли введенное с клавиатуры число в массиве. Массив должен вводиться во время работы программы.
		const int n = 5;
		int a[n];

		cout << "Введите массив (5 целых чисел в одной строке) -> ";
		for (int i = 0; i<n; i++)
		{
			cin >> a[i];
		}

		int num;
		cout << "Введите число: ";
		cin >> num;

		bool f = true;
		for (int j = 0; j<n; j++)
		{
			if (num == a[j])
			{
				f = false;
				break;
			}
		}

		if (f)
			cout << "Число не находится в массиве" << endl;
		else
			cout << "Число находится в массиве" << endl;
	}
	break;

	case 6:
	{
		//Написать программу, которая вычисляет, сколько раз введенное с клавиатуры число встречается в массиве.
		const int n = 10;
		int a[n] = { 1, 6, 5, 6, 9, 5, 4, 3, 1, 15 };

		int num;
		cout << "Введите число: ";
		cin >> num;

		int sum = 0;

		for (int i = 0; i<n; i++)
		{
			if (a[i] == num)
				sum++;
		}
		cout << "число встречается в массиве " << sum << " раз" << endl;
	}
	break;

	case 7:
	{
		//Написать программу, которая проверяет, есть ли во введенном с клавиатуры массиве элементы с одинаковым значением.
		const int n = 5;
		int a[n];

		int f = 0;
		cout << "Введите массив (5 целых чисел в одной строке) -> ";
		for (int i = 0; i<n; i++)
		{
			cin >> a[i];
		}

		for (int j = 0; j<n; j++)
		{
			for (int k = 0; k<n; k++)
			{
				if (j != k)
				{
					if (a[j] == a[k])
						f++;
				}
			}
		}

		if (f>0)
			cout << "В массиве есть элементы с одинаковым значением" << endl;
		else
			cout << "В массиве нет элементов с одинаковым значением" << endl;
	}
	break;

	case 8:
	{
		//Написать программу, которая определяет количество учеников в классе, чей рост превышает средний. 
		const int n = 100;
		int a[n];
		int sum = 0, countStudents = 0, countTall = 0, m = 0;

		cout << "Введите рост (см) и нажмите Enter. Для завершения введите 0 и нажмите Enter" << endl;
		for (int i = 0; i<n; i++)
		{
			cout << " -> ";
			cin >> a[i];

			if (a[i] == 0)
			{
				break;
			}
			else
			{
				m++;
				sum += a[i];
				countStudents++;
			}
		}

		for (int j = 0; j<m; j++)
		{
			if (a[j]>(sum / countStudents))
				countTall += 1;
		}

		cout << "Средний рост: " << (double)sum / countStudents << endl;
		cout << "у " << countTall << " человек рост превышает средний" << endl;
	}
	break;

	case 9:
	{
		//Написать программу, которая обрабатывает результаты экзамена. Для каждой оценки программа должна вычислить процент от общего количества оценок. 
		int a[4];
		int sum = 0;

		cout << "Введите исходные данные: " << endl;
		for (int i = 0; i<4; i++)
		{
			if (i == 0)
			{
				cout << "пятерок -> ";
				cin >> a[i];
			}
			if (i == 1)
			{
				cout << "четверок -> ";
				cin >> a[i];
			}
			if (i == 2)
			{
				cout << "троек -> ";
				cin >> a[i];
			}
			if (i == 3)
			{
				cout << "двоек -> ";
				cin >> a[i];
			}

			sum += a[i];
		}

		cout << "Результаты экзамена: " << endl;
		for (int j = 0; j<4; j++)
		{
			if (j == 0)
			{
				cout << "пятерок " << a[j] * 100 / sum << "%" << endl;
			}
			if (j == 1)
			{
				cout << "четверок " << a[j] * 100 / sum << "%" << endl;
			}
			if (j == 2)
			{
				cout << "троек " << a[j] * 100 / sum << "%" << endl;
			}
			if (j == 3)
			{
				cout << "двоек " << a[j] * 100 / sum << "%" << endl;
			}
		}
	}
	break;

	case 10:
	{
		//Дан массив символов s1,..sn.Подсчитать сколько раз встречается в массиве символ К.
		const int n = 10;
		char s[n] = { 'M', 'L', 'K', 'T', 'K', 'F', 'K', 'M', 'U', 'D' };

		int sum = 0;
		for (int i = 1; i <= n; i++)
		{
			if (s[i] == 'K')
				sum++;
		}

		cout << "Символ К встречается в массиве " << sum << " раза" << endl;
	}
	break;

	case 11:
	{
		//Дан массив символов S1,...,Sn. Распечатать все буквы, непосредственно перед которыми находится буква С.
		int a[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };

		int k;

		for (int i = 0; i<10; i++)
		{
			if (a[i] == 'c')
				k = i;

			if (i >= 0 && i <= k)
				continue;
			else
				cout << (char)a[i] << " ";
		}
	}
	break;

	case 12:
	{
		//Даны действительные числа а1,..a16. Получить min(a1*a9,a2*a10,...,a8*a16).
		double a[16] = { 1.2, 3.5, 4.8, 5.1, 5.0, 7.8, 5.6, 15.1, 4.9, 1.8, 11.4, 9.4, 2.2, 5.5, 3.2, 10.8 };
		double minVal = INT_MAX;

		for (int i = 0; i<16 / 2; i++)
		{
			if (a[i] * a[i + 8]<minVal)
				minVal = a[i] * a[i + 8];
		}

		cout << minVal << endl;
	}
	break;
	}



	return 0;
}