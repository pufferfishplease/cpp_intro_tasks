#include <iostream>

//Global variable
bool done = false;

int sum(int min, int max)
{
    std::cout << "done ? " << done << '\n';

    int sum_value = 0;

    for (int i = min; i <= max; i++)
    {
        if (sum_value > 3) {
            int tmp = 0;
            sum_value += i;
            tmp = tmp + 10;
        }
    }
    return sum_value;
}

int average(int min, int max)
{
    std::cout << "done ? " << done << '\n';
    int s = sum(min, max);
    float avg = s / (max - min);
    return avg;
}

int main()
{
    int min = 1;
    int max = 10;

    int s = sum(min, max);

    float avg = average(min, max);

    done = true;

    std::cout << s << avg << '\n';
}
