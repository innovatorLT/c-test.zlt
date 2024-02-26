#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu() {
	printf("******   1. play   0. exit   *****");
}

void game() {
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	while (1) {
		printf("猜数字>");
		scanf("%d", &guess);
		if (guess > ret) {
			printf("猜数字大了\n");
		}
		if (guess < ret) {
			printf("猜数字小了\n");
		}
		if (guess == ret) {
			printf("恭喜你猜对了\n");
			break;
		}
	}
}

int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择>");
		scanf("%d", &input);
		switch (input) {
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误\n");
				break;
		}
	} while (input);
	return 0;
}