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
	puts("������� ���:");
	scanf("%i", &yeas);
	if (yeas % 4 == 0 && yeas % 100 != 0 || yeas % 400 == 0)
		printf("��� %i ���������� ", yeas);
	else printf("��� %i �� ����������", yeas);
	//2 ��� x = 13 �����: -2188, ��� x = 14 �����:-0.2
	double x;
	puts("\n������� x");
	scanf_s("%lf", &x);
	printf("�����:%.4lf ", F(x));
	//3
	int year;
	puts("\n������� ���:");
	scanf("%i", &year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		printf("� ���� %i 366 ���� ", year);
	else printf("� ���� %i 365 ����", year);
}