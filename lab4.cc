#include <stdio.h> 

#define MIN_VALUE 23 
#define MAX_VALUE 32

int main() { 
   int x, num, bit; 
   int result; 
   printf("Введите число:\n"); 
   scanf("%d", &x); 
   result = MIN_VALUE <= x && x <= MAX_VALUE; 
   printf("Число %d входит в диапозон %d...%d ?  %s  \n", x, MIN_VALUE, MAX_VALUE, result ? "да":"нет"); 
   printf("Введите число и номер бита:\n");
   if(scanf("%d%d", &num, &bit) != 2 || bit < 0)
        return 1;
     printf("Бит: %d\n", num & (1 << bit));
    return 0;
}
