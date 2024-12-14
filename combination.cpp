#include <iostream>
#include "combination.h"
#include "factorial.h"

int comb(int n, int r)
{
	int res;

	if (r) //r�� 0�� �ƴ϶��
	{
		res = factorial(n) / (factorial(n - r) * factorial(r));
	}
	else
	{
		res = 1;
	}
	
	return res;
}