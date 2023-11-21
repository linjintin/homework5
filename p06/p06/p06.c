#include<stdio.h>
#include<stdlib.h>

int callbyvalue(int n);
int main(void)
{
	int number = 5;
	printf("The original value of number is %d", number);

	number = callbyvalue(number);

	printf("\nThe new value of number is %d\n", number);

	system("pause");
	return 0;
}

int callbyvalue(int n) {
	return n * n*n;
}

