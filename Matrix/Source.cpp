#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int n;
	cout << "������� ����� �������: ";
	cin >> n;

	switch (n)
	{
	case 1:
	{
		//�������� ���������, ������� ������ � ���������� ���������� ������ �� 5 ����� �����, 
		//����� ���� ������� ���������� ��������� ���������. ����� ������ ������� �������� ������ ���������� ��������� � ������� ��������.

		int a[5];
		int sum = 0;

		for (int i = 1; i <= 5; i++)
		{
			cout << "a[" << i << "]" << " -> ";
			cin >> a[i];

			if (a[i] != 0)
				sum++;
		}
		cout << "� ������� " << sum << " ��������� ��������" << endl;
	}
	break;

	case 2:
	{
		//�������� ���������, ������� ������� ����������� ������� ���������� � ���������� ������� ����� �����.

		const int n = 5;
		int a[n];
		int min_val = INT_MAX;

		cout << "������� � ����� ������ �������� ������� (5 ���������), ������� Enter: " << endl;
		for (int i = 0; i<n; i++)
		{
			cin >> a[i];
			if (a[i]<min_val)
				min_val = a[i];
		}
		cout << "����������� ������� �������: " << min_val;
	}
	break;

	case 3:
	{
		//�������� ���������, ������� ��������� ������� �������������� ��������� ��������� ���������� � ���������� ������� ����� �����. 
		
		const int n = 10;
		int a[n];
		int sumAll = 0, sumNotNull = 0, countNum = 0;

		cout << "������� � ����� ������ �������� ������� (5 ���������), ������� Enter: " << endl;
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
		cout << "����� ��������� �������: " << sumAll << endl;
		cout << "���������� ��������� ���������: " << countNum << endl;
		cout << "������� �������������� ��������� ���������: " << (double)sumNotNull / countNum << endl;
	}
	break;

	case 4:
	{
		//�������� ���������, ������� ��������� ������� �������������� ��������� ������� ��� ����� ������������ � ������������� ��������� �������.
		const int n = 10;
		int a[n];
		int minValue = INT_MAX, maxValue = INT_MIN;

		int sum = 0;

		cout << "������� ������ (10 ����� ����� � ����� ������) -> ";
		for (int i = 0; i<n; i++)
		{
			cin >> a[i];
			sum += a[i];

			if (a[i]<minValue)
				minValue = a[i];
			if (a[i]>maxValue)
				maxValue = a[i];
		}

		cout << "����������� �������: " << minValue << endl;
		cout << "������������ �������: " << maxValue << endl;
		cout << "������� �����. ��� ����� min � max ��������: " << (double)(sum - minValue - maxValue) / (n - 2) << endl;
	}
	break;

	case 5:
	{
		//�������� ���������, ������� ���������, ��������� �� ��������� � ���������� ����� � �������. ������ ������ ��������� �� ����� ������ ���������.
		const int n = 5;
		int a[n];

		cout << "������� ������ (5 ����� ����� � ����� ������) -> ";
		for (int i = 0; i<n; i++)
		{
			cin >> a[i];
		}

		int num;
		cout << "������� �����: ";
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
			cout << "����� �� ��������� � �������" << endl;
		else
			cout << "����� ��������� � �������" << endl;
	}
	break;

	case 6:
	{
		//�������� ���������, ������� ���������, ������� ��� ��������� � ���������� ����� ����������� � �������.
		const int n = 10;
		int a[n] = { 1, 6, 5, 6, 9, 5, 4, 3, 1, 15 };

		int num;
		cout << "������� �����: ";
		cin >> num;

		int sum = 0;

		for (int i = 0; i<n; i++)
		{
			if (a[i] == num)
				sum++;
		}
		cout << "����� ����������� � ������� " << sum << " ���" << endl;
	}
	break;

	case 7:
	{
		//�������� ���������, ������� ���������, ���� �� �� ��������� � ���������� ������� �������� � ���������� ���������.
		const int n = 5;
		int a[n];

		int f = 0;
		cout << "������� ������ (5 ����� ����� � ����� ������) -> ";
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
			cout << "� ������� ���� �������� � ���������� ���������" << endl;
		else
			cout << "� ������� ��� ��������� � ���������� ���������" << endl;
	}
	break;

	case 8:
	{
		//�������� ���������, ������� ���������� ���������� �������� � ������, ��� ���� ��������� �������. 
		const int n = 100;
		int a[n];
		int sum = 0, countStudents = 0, countTall = 0, m = 0;

		cout << "������� ���� (��) � ������� Enter. ��� ���������� ������� 0 � ������� Enter" << endl;
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

		cout << "������� ����: " << (double)sum / countStudents << endl;
		cout << "� " << countTall << " ������� ���� ��������� �������" << endl;
	}
	break;

	case 9:
	{
		//�������� ���������, ������� ������������ ���������� ��������. ��� ������ ������ ��������� ������ ��������� ������� �� ������ ���������� ������. 
		int a[4];
		int sum = 0;

		cout << "������� �������� ������: " << endl;
		for (int i = 0; i<4; i++)
		{
			if (i == 0)
			{
				cout << "������� -> ";
				cin >> a[i];
			}
			if (i == 1)
			{
				cout << "�������� -> ";
				cin >> a[i];
			}
			if (i == 2)
			{
				cout << "����� -> ";
				cin >> a[i];
			}
			if (i == 3)
			{
				cout << "����� -> ";
				cin >> a[i];
			}

			sum += a[i];
		}

		cout << "���������� ��������: " << endl;
		for (int j = 0; j<4; j++)
		{
			if (j == 0)
			{
				cout << "������� " << a[j] * 100 / sum << "%" << endl;
			}
			if (j == 1)
			{
				cout << "�������� " << a[j] * 100 / sum << "%" << endl;
			}
			if (j == 2)
			{
				cout << "����� " << a[j] * 100 / sum << "%" << endl;
			}
			if (j == 3)
			{
				cout << "����� " << a[j] * 100 / sum << "%" << endl;
			}
		}
	}
	break;

	case 10:
	{
		//��� ������ �������� s1,..sn.���������� ������� ��� ����������� � ������� ������ �.
		const int n = 10;
		char s[n] = { 'M', 'L', 'K', 'T', 'K', 'F', 'K', 'M', 'U', 'D' };

		int sum = 0;
		for (int i = 1; i <= n; i++)
		{
			if (s[i] == 'K')
				sum++;
		}

		cout << "������ � ����������� � ������� " << sum << " ����" << endl;
	}
	break;

	case 11:
	{
		//��� ������ �������� S1,...,Sn. ����������� ��� �����, ��������������� ����� �������� ��������� ����� �.
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
		//���� �������������� ����� �1,..a16. �������� min(a1*a9,a2*a10,...,a8*a16).
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