#include <iostream>
#include "factorial.h"
#include "combination.h"

using namespace std;

int main(void)
{
	int n;
	cout << "����� ���� ������ �Է��Ͻÿ� : ";
	cin >> n;

	int i = 1, t = n; //t = �� �ٿ��� ����� ����;
	int p;

	while (i <= t)
	{
		cout << ' ';
		i++;
	}
	cout << 1;
	i = 1;
	while (i < t)
	{
		cout << ' ';
		i++;
	}
	cout << '\n';
	t--;

	i = 1;
	while (i <= n)
	{
		int j = 0;

		int k = 1;
		while (k <= t)				//���� ���
		{
			cout << ' ';
			k++;
		}
		t--;

		while (j <= i)
		{
			p = j;
			cout << comb(i, j);
			cout << ' ';
			j++;
		}
	
		cout << '\n';

		i++;
	}


	return 0;
}