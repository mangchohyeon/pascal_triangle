#include <iostream>
#include "combination.h"
#include "factorial.h"

int comb(int n, int r)
{
	int res;

	if (r) //r이 0이 아니라면
	{
		res = factorial(n) / (factorial(n - r) * factorial(r));
	}
	else
	{
		res = 1;
	}
	
	return res;
}