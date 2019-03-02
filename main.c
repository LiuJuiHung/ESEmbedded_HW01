#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }

// int (*func_ptr[4])(int ,int) = 
// {
// 	plus,
// 	minus,
// 	multiply,
// 	divided
// };

int main()
{
	int a, c;
	char b;
	printf("key a Function \nEX: 1 + 1\n");
	scanf("%i %c %i", &a, &b, &c);
	//IF ELSE IF
	int (*func_ptr[48])(int, int);
	func_ptr[(int)'+'] = plus;
	func_ptr[(int)'-'] = minus;
	func_ptr[(int)'*'] = multiply;
	func_ptr[(int)'/'] = divided;
	printf("%d\n", (*func_ptr[(int)b])(a, c));

}
