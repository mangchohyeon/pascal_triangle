#include <iostream>
#include "factorial.h"
#include "combination.h"

using namespace std;

int main(void)
{
	int n;
	cout << "출력할 행의 개수를 입력하시오 : ";
	cin >> n;

	int i = 1, t = n; //t = 각 줄에서 출력할 공백;
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
		while (k <= t)				//공백 출력
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