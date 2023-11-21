#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int binarySearchRecursive(int arr[], int low, int high, int k) {
	if (low <= high) {
		int mid = low + (high - low) / 2;

		// 如果找到关键字，返回索引
		if (arr[mid] == k) {
			return mid;
		}

		// 如果关键字比中间元素小，在左侧继续搜索
		if (arr[mid] > k) {
			return binarySearchRecursive(arr, low, mid - 1, k);
		}

		// 如果关键字比中间元素大，在右侧继续搜索
		return binarySearchRecursive(arr, mid + 1, high, k);
	}

	// 关键字不在数组中，返回 -1
	return -1;
}
int main(void) {
	int k = 2004,tmp;
	srand(time(NULL));
	int a, b, c = 0;
	int arr[13] = { 0 };
	for (int i = 0; i < 36000; i++) {
		a = (rand() % 6) + 1;
		b = (rand() % 6) + 1;
		arr[a + b]++;
	}
	for (int i = 13 - 1; i > 0; i--)
	{
		for (int j = 0; j <= i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (int i = 2; i <= 12; i++) {
		printf("%d\n", arr[i]);
	}
	int result= binarySearchRecursive(arr, 2, 13, k);
	printf("%d\n", result);
}