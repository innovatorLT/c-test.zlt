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
		printf("������>");
		scanf("%d", &guess);
		if (guess > ret) {
			printf("�����ִ���\n");
		}
		if (guess < ret) {
			printf("������С��\n");
		}
		if (guess == ret) {
			printf("��ϲ��¶���\n");
			break;
		}
	}
}

int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input) {
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����\n");
				break;
		}
	} while (input);
	return 0;
}