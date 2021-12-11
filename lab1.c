
#include <stdio.h>
#include <string.h>
int main(){
	char a, s[100];

	printf("Введите любой символ: ");
	scanf("%s", &a);
	printf("%c", a);

	while (getchar() != '\n');

	printf("\nВведите любую строку длинною не более 100: ");
	fgets(s, 100, stdin);
	printf("%s", s);
return 0;	
}

