#include <stdio.h>

void stringReverse(char array[]) {
	if (array[0] == '\0') {  // 檢查是否遇到字串的終止空字元
		return;
	}
	else {
		stringReverse(array + 1);  // 遞歸呼叫，傳遞字串的下一個字元
		printf("%c", array[0]);    // 印出當前字元
	}
}


int main() {
	char myString[20];
	scanf("%s", &myString);
	stringReverse(myString);
	return 0;
}