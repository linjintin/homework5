#include <stdio.h>
#include <stdlib.h>

// 遞歸函數，找出數組中的最大值
int recursiveMaximum(int array[], int size) {
	// 基本情況：當數組大小為 1 時，返回該元素
	if (size == 1) {
		return array[0];
	}
	else {
		// 遞歸步驟：比較當前元素與其餘數組的最大值，返回最大值
		int maxRest = recursiveMaximum(array + 1, size - 1);
		return (array[0] > maxRest) ? array[0] : maxRest;
	}
}

int main() {
	// 輸入數組大小
	int size;
	printf("Enter the size of the array: ");
	scanf("%d", &size);

	// 動態分配記憶體以存放數組元素
	int *myArray = (int *)malloc(size * sizeof(int));

	if (myArray == NULL) {
		printf("Memory allocation failed.\n");
		return 1; // 程式結束，返回非零值表示錯誤
	}

	// 輸入數組元素
	printf("Enter the elements of the array:\n");
	for (int i = 0; i < size; ++i) {
		scanf("%d", &myArray[i]);
	}

	// 呼叫遞歸函數找出最大值
	int max = recursiveMaximum(myArray, size);

	// 輸出結果
	printf("The maximum element in the array is: %d\n", max);

	// 釋放動態分配的記憶體
	free(myArray);

	return 0;
}