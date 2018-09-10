#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define MAX 3
struct product {
	char no[5];
	char title[20];
	int price;
};
int main(int argc, char *argv[]) {
	struct product cd[MAX];
	printf(" ==== CD唱片登入系統 ==== \n\n");
	for (i = 0; i < MAX; i++) {
		printf(" 第 %d 張CD唱片 : ", i + 1);
		gets(cd[i].no);
		printf("         CD抬頭 : ");
		gets(cd[i].title);
		printf("         CD售價 : ");
		scanf("%d", &cd[i].price);
		printf("\n");
	}
	printf("\n");
	int input;
	printf(" 請輸入要查詢的CD編號 : ");
	gets(input);
	int i;
	bool num = 1;
	for (i = 0; i < MAX; i++) {
		if (strcmp(cd[i].no, input) == 0) {
			num = 0;
			break;
		}
	}
}
