#include <stdio.h>
#include <stdlib.h>

// ���k��ơA��X�Ʋդ����̤j��
int recursiveMaximum(int array[], int size) {
	// �򥻱��p�G��Ʋդj�p�� 1 �ɡA��^�Ӥ���
	if (size == 1) {
		return array[0];
	}
	else {
		// ���k�B�J�G�����e�����P��l�Ʋժ��̤j�ȡA��^�̤j��
		int maxRest = recursiveMaximum(array + 1, size - 1);
		return (array[0] > maxRest) ? array[0] : maxRest;
	}
}

int main() {
	// ��J�Ʋդj�p
	int size;
	printf("Enter the size of the array: ");
	scanf("%d", &size);

	// �ʺA���t�O����H�s��Ʋդ���
	int *myArray = (int *)malloc(size * sizeof(int));

	if (myArray == NULL) {
		printf("Memory allocation failed.\n");
		return 1; // �{�������A��^�D�s�Ȫ�ܿ��~
	}

	// ��J�Ʋդ���
	printf("Enter the elements of the array:\n");
	for (int i = 0; i < size; ++i) {
		scanf("%d", &myArray[i]);
	}

	// �I�s���k��Ƨ�X�̤j��
	int max = recursiveMaximum(myArray, size);

	// ��X���G
	printf("The maximum element in the array is: %d\n", max);

	// ����ʺA���t���O����
	free(myArray);

	return 0;
}