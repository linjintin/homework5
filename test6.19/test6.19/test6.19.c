#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
	int dice1, dice2, sum;
	int frequencies[13] = { 0 }; // 用于记录每种点数出现的次数，下标 2 到 12 对应点数 2 到 12

	srand(time(NULL)); // 使用当前时间作为随机数生成器的种子

	// 模拟投掷两个骰子 36,000 次
	for (int i = 0; i < 36000; i++) {
		dice1 = (rand() % 6) + 1; // 生成 1 到 6 的随机数
		dice2 = (rand() % 6) + 1; // 生成 1 到 6 的随机数
		sum = dice1 + dice2;
		frequencies[sum]++;
	}

	// 输出结果
	printf("%-10s%-10s\n", "Total", "Frequency");
	for (int i = 2; i <= 12; i++) {
		printf("%-10d%-10d\n", i, frequencies[i]);
	}

	// 检查执行结果是否合理
	printf("\nExpected frequencies for 7: %d\n", 36000 / 6);

	return 0;
}