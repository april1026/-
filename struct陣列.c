#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define MAX 10
struct product {
	char id[MAX];
	char name[40];
	int price;
} book[] = {"vb001", "Visual Basic 2013程式設計經典", 660, "vc001", "Visual C++ 2013程式設計經典", 650, "cs001", "Visual C# 2013程式設計經典", 670};
void show(int, struct product[]);
void search(int, struct product[], char[]);
int main(int argc, char *argv[]) {
	char keyin[MAX];
	show(sizeof(book), book);
	printf("\n\n");
	printf("===>>> 請輸入查詢書號 : ");
	gets(keyin);
	
	search(sizeof(book), book, keyin);
	printf(" \n\n");
	
	system("PAUSE");
	return 0;
}
void show(int arysize, struct product tary[]) {
	int aryindex = arysize / sizeof(struct product);
	int i = 0;
	for (i = 0; i < aryindex; i++) {
		printf("\n 第 %d 筆書號 : %s\n", i + 1, tary[i].id);
		printf("           書名 : %s\n", tary[i].name);
		printf("           單價 : %d\n", tary[i].price);
	}
}
void search(int arysize, struct product tary[], char keyin[]) {
	int i =0, num = -1;
	int aryindex = arysize / sizeof(struct product);
	
	for (i = 0; i < aryindex; i++) {
		if (strcmp(tary[i].id, keyin) == 0) {
			num = i;
			break;
		}
	}
	
	if (num == -1) {
		printf("查無此書");
	} else {
		printf("\t\t書名 : %s \n", tary[num].name);
		printf("\t\t單價 : %d \n", tary[num].price);
	}
}
