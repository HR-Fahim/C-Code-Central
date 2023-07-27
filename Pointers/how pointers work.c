#include <stdio.h>
void f(int, double, int *, double *);
int main(void)
{
int a = 5; double b = 7.1;
int c = 12; double d = 22.3;
printf("a = %d, b = %f, c = %d, d = %f\n\n", a, b, c, d);
printf("&a = %p, &b = %p\n\n", &a, &b);
f(c, d, &a, &b);
printf("After returning from function f:\n\n");
printf("a = %d, b = %f, c = %d, d = %f\n\n", a, b, c, d);
return 0;
}
void f(int w, double x, int *y, double *z)
{
printf("w = %d, x = %f, y = %p, z = %p\n\n",w, x, y, z);
w = 2 * w;
x = 3 * x;
*y = *y * 4;
*z = 5 * *z;
}


