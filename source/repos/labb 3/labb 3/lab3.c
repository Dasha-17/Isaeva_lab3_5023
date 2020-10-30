#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdarg.h>
float max(float a, ...) {
	va_list ap;
	double max2 = 0;
	int i;
	va_start (ap, a);


	if (max2 < va_arg(ap, float))
			max2 = va_arg(ap, float);
	
	va_end(ap);
	return max2;
}
int main() {
	float a, b, c, d;
	int e = 0;
	printf("input a ");
	e = scanf("%f", &a);
	if (e != 1)
		return printf("Error, try again\n");
	printf("input b ");
	e = scanf("%f", &b);
	if (e != 1)
		return printf("Error, try again\n");
	printf("input c ");
	e = scanf("%f", &c);
	if (e != 1)
		return printf("Error, try again\n");
	printf("input d ");
	e = scanf("%f", &d);
	if (e != 1)
		return printf("Error, try again\n");
	float m = 0;
	m = max(a, b, c, d);
	printf("max = %f", m);
	return 0;
}