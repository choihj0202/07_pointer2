#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sum(int a, int b)
{	
	return a+b;
} 

int subtract(int a, int b)
{	
	return a-b;
}

int time(int a, int b)
{	
	return a*b;
}

int divide(int a, int b)
{	
	return a/b;
}

int main(int argc, char *argv[]) {
	
	int num1, num2;
	int (*calculation)(int, int);
	char ch;
	
	printf("input calculation : ");
	scanf("%d %c %d", &num1, &ch, &num2);
	
	switch (ch)
	{
		case '+' : calculation = sum; break;
		case '-' : calculation = subtract; break;
		case '*' : calculation = time; break;
		case '/' : calculation = divide; break;
	}
	
	printf("output : %d\n", calculation(num1, num2));
	return 0;
}
