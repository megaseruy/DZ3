/* 3.29 a
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main()
{
	double x, y;
	scanf("%lf %lf", &x, &y);
	bool result = (fmod(x, 2.0) != 0) && (fmod(y, 2.0) != 0);
	printf("%d", result);
}
*/
/*3.29 б
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int main()
{
	double x, y;
	scanf("%lf %lf", &x, &y);
	bool result = (x < 20) != (y < 20);
	printf("%d", result);
}
*/
/* 3.29в
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int main()
{
	double x, y;
	scanf("%lf %lf", &x, &y);
	bool result = (x == 0) || (y == 20);
	printf("%d", result);
}
*/
/* 3.29г
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int main()
{
	double x, y, z;
	scanf("%lf %lf %lf", &x, &y, &z);
	bool result = (x < 0) && (y < 0) && (z < 0);
	printf("%d", result);
}
*/
/*3.29д
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main()
{
	double x, y,z;
	scanf("%lf %lf %lf", &x, &y, &z);
	bool result = (fmod(x, 5.0) == 0 && fmod(y, 5.0) != 0 && fmod(z, 5.0) != 0) || (fmod(x, 5.0) != 0 && fmod(y, 5.0) == 0 && fmod(z, 5.0) != 0) || (fmod(x, 5.0) != 0 && fmod(y, 5.0) != 0 && fmod(z, 5.0) == 0);
	printf("%d", result);
}
*/
/* 3.29 е
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int main()
{
	double x, y, z;
	scanf("%lf %lf %lf", &x, &y, &z);
	bool result = (x > 100) || (y > 100) || (z > 100);
	printf("%d", result);
}
*/
/* 3.30a
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int main()
{
	int x;
	scanf("%d", &x);
	bool result = (x%2 ==0) || (x%3 ==0);
	printf("%d", result);
}
*/
/* 3.30б
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int main()
{
	int x;
	scanf("%d", &x);
	bool result = (x % 10 == 0) && (x % 3 != 0);
	printf("%d", result);
}
*/
/* 3.31a
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int main()
{
	int x;
	scanf("%d", &x);
	bool result = (x % 5 == 0) || (x % 7 == 0);
	printf("%d", result);
}
*/
/*3.31б
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int main()
{
	int x;
	scanf("%d", &x);
	bool result = (x % 10 != 0) && (x % 4 == 0);
	printf("%d", result);
}
*/
/*3.33а
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int main()
{
	double x, y;
	scanf("%lf %lf", &x, &y);
	bool result = (x < -1) && (y < -2);
	printf("%d", result);
}
*/
/* 3.33б
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int main()
{
	double x, y;
	scanf("%lf %lf", &x, &y);
	bool result = (y < -3) || (y > 1);
	printf("%d", result);
}
*/
/*3.33в 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int main()
{
	double x, y;
	scanf("%lf %lf", &x, &y);
	bool result = (y > 1) || ((y < -3) && (y > -4);
	printf("%d", result);
}
*/
/*3.33г
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int main()
{
	double x, y;
	scanf("%lf %lf", &x, &y);
	bool result = ( (x>-1) && (x < 1.5) ) && ( (y>-0.5) && (y < 1.5));
	printf("%d", result);
}
*/
/* 3.33д
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int main()
{
	double x, y;
	scanf("%lf %lf", &x, &y);
	bool result = ((x > 1) && (x < 4)) && ((y > 2) && (y < 4));
	printf("%d", result);
}
*/
/*3.33е
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int main()
{
	double x, y;
	scanf("%lf %lf", &x, &y);
	bool result = ((x > 2) || (x < -1)) && (y > 1);
	printf("%d", result);
}
*/
/* 3.33ж
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int main()
{
	double x, y;
	scanf("%lf %lf", &x, &y);
	bool result = ((x > 1) && (x < 3)) && ((y > -3) && (y < 1));
	printf("%d", result);
}
*/
/* 3.33з
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int main()
{
	double x, y;
	scanf("%lf %lf", &x, &y);
	bool result = ((x > 1) && (x < 2.5) && (y < 1.5)) || (y > 1.5);
	printf("%d", result);
}
*/
/*3.34a
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int main()
{
	int a, b;
	int c, d;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	bool result = (a == c) || (b==d);
	printf("%d", result);
}
*/
/*3.34б
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main()
{
	int a, b;
	int c, d;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	if (abs(c-a) == abs(d-b) )  {
		printf("under attack");
	}
	else {
		printf(" not under attack");
	}
}
*/
/*3.34 в
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main()
{
	int a, b;
	int c, d;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	if (abs(c - a) == abs(d - b)) {
		printf("posiible");
	}
	else {
		if ((abs(c - a) == 1 && abs(d - b) == 0) || (abs(c - a) == 0 && abs(d - b) == 1)) {
			printf ("possible");
		}
		else {
			printf("impossible");
	}
	
	}
}
*/
/*3.34 г
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
	int a, b;
	int c, d;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	bool result = ((a == c) || (b == d)) || (abs(c-a) == abs(d-b));
	printf("%d", result);
}
*/
/*3.34д
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int main()
{
	int a, b;
	int c, d;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	bool result = (a == c) && ((d-b) == 1);
	printf("%d", result);
}
*/
/*3.34 д2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main()
{
	int a, b;
	int c, d;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	if (d > b) {
		bool result = abs(c - a) == abs(d - b) == 1;
		printf("%d", result);
	}
	else {
		printf("impossible");
	}
}
*/

/*3.34e
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int main()
{
	int a, b;
	int c, d;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	bool result = (a == c) && ((d - b) == -1);
	printf("%d", result);
}
*/
/* 3.34 е2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main()
{
	int a, b;
	int c, d;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	if (d < b) {
		bool result = abs(c - a) == abs(d - b) == 1;
		printf("%d", result);
	}
	else {
		printf("impossible");
	}
}
*/
/*3.34ж
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main()
{
	int a, b;
	int c, d;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	bool result = (abs(c-a) == 1 && abs(d-b) == 2) || (abs(c-a) == 2 && abs(d-b) == 1);
	printf("%d", result);
	
}
*/
/*4.10
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	double r;
	scanf("%lf", &r);
	if (M_PI * r * r < r * r) {
		printf("round is bigger");
	}
	else {
		printf("square is bigger");
	}
}
*/
/*4.15
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int y1, m1;
	int y2, m2;
	scanf("%d" "%d", &y1, &m1);
	scanf("%d" "%d", &y2, &m2);

	int age = y2 - y1;
	if (m2 < m1) {
		age--;
	}
}
*/
/*4.20	
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int m, n;
	scanf("%d" "%d", &m, &n);

	if (m % n == 0) {
		printf("%d\n", m / n);
	}
	else {
		printf("m на n нацело не делится\n");
	}

}
*/