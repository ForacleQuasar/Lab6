#include <math.h>
#include <locale.h>
#include <stdio.h>
//2
double F(double x) {
	double m;
	if (x <= 13)
		m = -1 * pow(x, 3) + 9;
	if (x > 13)
		m = -1 * (3 / (x + 1));
	return m;
}
void main() {
	setlocale(LC_CTYPE, "RUS");
	//1
	int yeas;
	puts("Введите год:");
	scanf("%i", &yeas);
	if (yeas % 4 == 0 && yeas % 100 != 0 || yeas % 400 == 0)
		printf("Год %i високосный ", yeas);
	else printf("Год %i не високосный", yeas);
	//2 при x = 13 ответ: -2188, при x = 14 ответ:-0.2
	double x;
	puts("\nВведите x");
	scanf_s("%lf", &x);
	printf("Ответ:%.4lf ", F(x));
	//3
	int year;
	puts("\nВведите год:");
	scanf("%i", &year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		printf("В году %i 366 дней ", year);
	else printf("В году %i 365 дней", year);
}