

#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Заданы три сопротивлении R1, R2, R3. Вычислить значение сопротивления R0 по формуле: 1/R0 = 1/R1+1/R2+1/R3.
	/*
	float r1, r2, r3, r0;
	cout << "Введите сопротивление R1: ";
	cin >> r1;
	cout << "Введите сопротивление R2: ";
	cin >> r2;
	cout << "Введите сопротивление R3: ";
	cin >> r3;
	cout << "R0 = " << 1 / (1 / r1 + 1 / r2 + 1 / r3);
	*/


	//  По заданной длине окружности найти площадь круга
	//  по формуле S = pi * R2, радиус вычислить из формулы длины
	// 	окружности : L = 2 * pi * R.
	/*
	const float pi = 3.14;
	float L, R;
	cout << "Введите длину окружности: ";
	cin >> L;
	R = L / 2 * pi;
	cout << "Радиус окружности = " << L / 2 * pi << endl;
	cout << "Следовательно, площадь окружности = " << R * 2 * pi;
	*/


	//  Вычислить пройденное расстояние при прямолинейном
	//  равноускоренном движении по формуле S = v * t + (a * t2) / 2,
	//	где v — скорость, t — время, а — ускорение.

	float v, t, a;
	cout << "Задайте скорость: "; cin >> v;
	cout << "Задайте время: "; cin >> t;
	cout << "Задайте ускорение: "; cin >> a;
	cout << "Пройденное расстояние = " << v * t + (a * t * 2) / 2;







}


