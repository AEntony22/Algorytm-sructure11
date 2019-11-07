#include "Algr01.h"

#include <stdio.h>
#include <math.h>
/*
struct Point {
	double x;
	double y;
};



double distance(struct Point A, struct Point B)
{
	return sqrt(pow(A.x-B.x,2) + pow(A.y-B.y,2));
}
int main(int argc, const char *argv[])
{
	double x1=0;
	double y1=0;
	double x2=0;
	double y2=0;
	double x3=0;
	double y3=0;

	printf("Input x1:");
	scanf_s("%lf", &x1);
	printf("Input y1:");
	scanf_s("%lf", &y1);
	printf("Input x2:");
	scanf_s("%lf", &x2);
	printf("Input y2:");
	scanf_s("%lf", &y2);
	printf("Input x3:");
	scanf_s("%lf", &x3);
	printf("Input y3:");
	scanf_s("%lf", &y3);

	double len1 = distance(x1,y1,x2,y2);
	double len2 = distance(x1, y1, x3, y3);
	double len3 = distance(x2, y2, x3, y3);
	printf("Периметр - сумма длин треугольника: %lf\n", len1 + len2 + len3);
	scanf_s("%lf", x1);
	return 0;
}

*/
//Кубанов Антон, Урок1
/*
1. Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I = m / (h * h), где m – масса тела в килограммах, h – рост в метрах.
2. Найти максимальное из четырёх чисел. Массивы не использовать.
3. Написать программу обмена значениями двух целочисленных переменных:
a. С использованием третьей переменной.
b. *Без использования третьей переменной.
4. Написать программу нахождения корней заданного квадратного уравнения.
5. С клавиатуры вводится номер месяца. Требуется определить, к какому времени года он относится.
6. Ввести возраст человека (от 1 до 150 лет) и вывести его вместе со словом «год», «года» или «лет».
7. С клавиатуры вводятся числовые координаты двух полей шахматной доски (x1, y1, x2, y2). Требуется определить, относятся ли к поля к одному цвету или нет.
8. Ввести a и b и вывести квадраты и кубы чисел от a до b.
9. Даны целые положительные числа N и K. Используя только операции сложения и вычитания, найти частное от деления нацело N на K, а также остаток от этого деления.
10. Дано целое число N > 0. С помощью операций деления нацело и взятия остатка от деления определить, имеются ли в записи числа N нечётные цифры. Если имеются, то вывести True, если нет – вывести False.
11. С клавиатуры вводятся числа, пока не будет введён 0. Подсчитать среднее арифметическое всех положительных чётных чисел, оканчивающихся на 8.
12. Написать функцию нахождения максимального из трёх чисел.
13. * Написать функцию, генерирующую случайное число от 1 до 100: 
a. С использованием стандартной функции rand().
b. Без использования стандартной функции rand().
14. * Автоморфные числа. Натуральное число называется автоморфным, если оно равно последним цифрам своего квадрата. Например, 25 \ :sup: '2' = 625. Напишите программу, которая получает на вход натуральное число N и выводит на экран все автоморфные числа, не превосходящие N.
*/
void solution1();
void solution2();
void solution3();
void solution4();
void solution5();
void solution6();
void solution7();
void solution8();
void solution9();
void solution10();
void solution11();
void solution12();
void solution13();
void solution14();
void menu();

int main()
{
	int sel = 0;
	do
	{
		menu();
		scanf_s("%i", &sel);
		switch (sel)
		{
		case 1:
			solution1();
			break;
		case 2:
			solution2();
			break;
		case 3:
			solution3();
			break;
		case 4:
			solution4();
			break;
		case 5:
			solution5();
			break;
		case 6:
			solution6();
			break;
		case 7:
			solution7();
			break;
		case 8:
			solution8();
			break;
		case 9:
			solution9();
			break;
		case 10:
			solution10();
			break;
		case 11:
			solution11();
			break;
		case 12:
			solution12();
			break;
		case 13:
			solution13();
			break;
		case 14:
			solution14();
			break;
		case 0:
			printf("Bye-bye");
			break;
		default:
			printf("Wrong selected\n");
		}
	} while (sel != 0);
	return 0;
}
void solution1()
{
	printf("Solution 1\n");
	// Решение
}
void solution2()
{
	printf("Solution 2\n");
	// 2. Найти максимальное из четырёх чисел. Массивы не использовать.
	int a, b, c, d, max;
	a = 12;
	b = 1;
	c = 55;
	d = 54;
	//основной алгоритм
	max=a;
	if (max < b) max = b;
	if (max < c) max = c;
	if (max < d) max = d;
	printf("Maximuf of your numbers  %d %d %d %d - %d\n", a, b, c, d, max);

}
void solution3()
{
	printf("Solution *3\n");
	/*
3. Написать программу обмена значениями двух целочисленных переменных :
a.С использованием третьей переменной. */
	int a = 2350000;
	int b = -444;
	printf("Need to swap a=%d b=%d\n", a, b);
	int temp = b;
	b = a;
	a = temp;
	temp = 0;
	printf("After swap (with 3rd var) a=%d b=%d\n", a, b);

/* b. *Без использования третьей переменной. */

	a = 235;
	b = 22444;
	printf("Need to swap a=%d b=%d\n", a,b);

	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
	printf("After swap a=%d b=%d\n", a, b);


}
void solution4()
{
	printf("Solution 4\n");
	// Решение
}
void solution5()
{
	printf("Solution 5\n");
	// Решение
}
void solution6()
{
	printf("Solution 6\n");
	// Решение
}
void solution7()
{
	printf("Solution 7\n");
	// Решение
}
void solution8()
{
	printf("Solution 8\n");
	// Решение
}
void solution9()
{
	printf("Solution 9\n");
	// Решение
}

int oddDetect(int a)
{
	while (a > 0)
	{
		if ((a % 10) % 2 == 1)
		{
			return 1;
			break;
		}
		a = a / 10;
	}
	return 0;
}
void solution10()
{
	printf("Solution 10\n");
	//10. Дано целое число N > 0. С помощью операций деления нацело и взятия остатка от деления определить, имеются ли в записи числа N нечётные цифры.
	//Если имеются, то вывести True, если нет – вывести False.
	

		int nn=22244;
		//printf("Input number:");   ---это не заработало!! не понял, почему (((
		//scanf_s("%d", nn);         ---
		if (oddDetect(nn) == 1) {
			printf("TRUE, there is odd in %d\n",nn);
		}
		else { printf("False, there is no odd in %d\n", nn); }


}

void solution11()
{
	printf("Solution 11\n");
	// Решение
}
void solution12()
{
	printf("Solution 12\n");
	// Решение
}
void solution13()
{
	printf("Solution 13\n");
	// Решение
}
void solution14()
{
	printf("Solution 14\n");
	// Решение
}




void menu()
{
	printf("----------------------------------\n");
	printf("1 - task1\n");
	printf("2 - task2\n");
	printf("3 - task3\n");
	printf("4 - task4\n");
	printf("5 - task5\n");
	printf("6 - task6\n");
	printf("7 - task7\n");
	printf("8 - task8\n");
	printf("9 - task9\n");
	printf("10 - task10\n");
	printf("11 - task11\n");
	printf("12 - task12\n");
	printf("13 - task13\n");
	printf("14 - task14\n");
	printf("0 - exit\n");
	printf("----------------------------------\n");
}

