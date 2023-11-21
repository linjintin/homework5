#include<stdio.h>
#include<stdlib.h>

void callbyreference(int &nPtr);
int main(void)
{
	int number = 5;
	printf("The original value of number is %d", number);

	callbyreference(number);

	printf("\nThe new value of number is %d\n", number);

	system("pause");
	return 0;
}

void callbyreference(int &nPtr)
{
	nPtr = nPtr * nPtr*nPtr;
}