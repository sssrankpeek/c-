#include<iostream>
#include<cmath>
#define PI 3.1415
#define E 0.001
float y(float a,float b)
{
	float y;
	y = (atan(sin(a + PI) / cos(b + 2.87))) / sqrt(a + pow(cos(b), 2));
	return y;
}
float F(float x)
{
	float z=0,a=1,ch = x,y=0;
	while(abs(ch/a-z)>E)
	{
		z = ch / a;
		y += z;
		ch *= -x;
		a++;
	}
	return y;
}
void main()
{
	float a, b;
	std::cout<<"Vvedite peremennyu a: ";
	std::cin >> a;
	std::cout << "Vvedite peremennyu b: ";
	std::cin >> b;
	std::cout << "Rezultat: " << y(a, b) << "\n";
	std::cout << "Rezultat 2: " << F(0.1);
}
