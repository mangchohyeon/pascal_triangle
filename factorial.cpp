#include <iostream>
#include "factorial.h"

int factorial(int n)
{
	int i = 1, res = 1;
	while (i <= n)
	{
		res = res * i;
		i++;
	}

	return res;
}