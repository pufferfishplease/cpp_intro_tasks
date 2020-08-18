#include <random>
#include <iostream>
#include <ctime>

int random(int min, int max)
{
	std::srand(std::time(0));
	return std::rand() % max + min;
}

float die_avg(int spin_times, int min, int max)
{
	float avg = 0;
	float sum = 0;

	for (int exp = 1; exp <= spin_times; exp++)
	{
		int rand = random(min, max);
		sum = sum + rand;
	}
	avg = sum / spin_times;
	return avg;
}


