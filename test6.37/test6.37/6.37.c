#include <stdio.h>
#include <stdlib.h>
int recursiveMaximum(int arr[], int n);
int main() {
	int n=1,result;
	printf("array size=");
	scanf("%d", &n);
	int *arr=(int *)malloc(sizeof(int)*n) ;
	printf("input number\n");
	for (int i = 0; i < n; i++) {
		scanf("%d",&arr[i]);
	}
	result=recursiveMaximum(arr, n);
	printf("%d", result);
}
int recursiveMaximum(int arr[], int n) {
	if (n == 1) {
		return arr[0];
	}
	else {
		int maxRest = recursiveMaximum(arr , n - 1);
		if (maxRest > arr[n - 1]) {
			return maxRest;
		}
		else {
			return arr[n - 1];
		}
	}
}