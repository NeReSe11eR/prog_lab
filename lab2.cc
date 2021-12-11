#include <stdio.h>
#include <math.h>
#define PI 3.1415926

int main() {
 float z1, z2, a;
 printf("Введите значение: ");
 scanf("%f", &a);
 z1 = cos(3.0/8.0*PI-a/4)*cos(3.0/8.0*PI-a/4)-cos(11./8.0*PI+a/4)*cos(11.0/8.0*PI+a/4);
 z2 = sqrt(2)/2*sin(a/2);
 printf("z1=%f\n", z1);
 printf("z2=%f\n", z2);
}