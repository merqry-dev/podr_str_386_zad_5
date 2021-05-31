#include <iostream>

#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

float fun(float x)
{
    return sin(x)+3*cos(x)-1;
}

float pole(float a, float b, float n)
{
	float h = (b - a) / n; 
	float suma = 0; 
	float podstawa_a = fun(a), podstawa_b;

	for (int i = 1; i <= n; i++)
	{
		podstawa_b = fun(a + h * i);
		suma += (podstawa_a + podstawa_b);
		podstawa_a = podstawa_b;
	}
	return suma * 0.5 * h;

}

int main()
{
    float a = 0;
    float b = M_PI /2;
    float n = 100;
    cout << pole(a, b, n) << endl;
}

