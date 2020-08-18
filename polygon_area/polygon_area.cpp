#include <iostream>
#include <cmath>

const float AF = 125.72;
const float AB = 100.5;
const float BC = 5.3;
const float PI = 3.1415926;
const float UNIT_PRICE_PER_M2 = 5200;

float area(float x)
{
    float big_rect_area = AF * AB;
    float DE = AF - BC;
    float small_rect_area = DE * x;
    float semi_circle_area = PI * pow(DE/2, 2) / 2;                         //PI * R^2 /2

    return big_rect_area + small_rect_area + semi_circle_area;
}

float cost(float x)
{
    float a = area(x);
    float cost = a * UNIT_PRICE_PER_M2;
    return cost;
}

int main()
{
    float x = 5;
    std::cout << "extension meter:" << x << "\tarea =" << area(x) << std::endl << "cost =\t" << cost(x) << std::endl ;
}

