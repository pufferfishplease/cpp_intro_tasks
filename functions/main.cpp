#include <iostream>

int sponge(int min, int max);
int random(int min, int max);
float die_avg(int spin_times, int min, int max);

int main()
{
	int sum = sponge(0, 250);
	std::cout << "sum of(1,2,...,250) = " << sum << std::endl;
	std::cout << "Finding the average of dice: " << die_avg(10000000, 1, 1000) << std::endl;
}
