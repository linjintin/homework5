#include <stdio.h>

void stringReverse(char array[]) {
	if (array[0] == '\0') {  // �ˬd�O�_�J��r�ꪺ�פ�Ŧr��
		return;
	}
	else {
		stringReverse(array + 1);  // ���k�I�s�A�ǻ��r�ꪺ�U�@�Ӧr��
		printf("%c", array[0]);    // �L�X��e�r��
	}
}


int main() {
	char myString[20];
	scanf("%s", &myString);
	stringReverse(myString);
	return 0;
}