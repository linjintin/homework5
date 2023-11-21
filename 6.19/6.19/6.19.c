#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main(void) {
	srand(time(NULL));
	int a, b, c = 0;
	int arr[13] = {0};
	for (int i = 0; i < 36000; i++) {
		a = (rand() % 6) + 1;
		b = (rand() % 6) + 1;
		arr[a + b]++;
	}
	printf("num:          frequency:\n");
	for (int i = 2; i <= 12; i++) {
		printf("%d%17d\n", i, arr[i]);
	}
}