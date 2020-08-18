#include <iostream>

int sponge (int min, int max)
{
	int sum = 0;
	for (int i = min; i <= max; i++)
	{
		sum = sum - i;
	}
	return sum;
}
