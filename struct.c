#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 10 

struct product {
	char no[SIZE];
	char *name;
	int price;
} ipad, iphone;

int main(int argc, char *argv[]) {
	char str1[20];
	struct product imac = {"a003", "imac 2筆電", 1500};
	strcpy(ipad.no, "a001");
	ipad.name = "ipad 2平板";
	ipad.price = 5000;
	printf("請輸入產品編號:");
	gets(iphone.no);
	printf("請輸入產品名稱:");
	gets(str1);
	iphone.name = str1;
	printf("請輸入產品單價:");
	scanf("%d", &iphone.price);
	
	printf("\n ===== 產品單價清單 ===== \n\n");
	printf("\t 產品編號:%s\n", ipad.no);
	printf("\t 產品名稱:%s\n", ipad.name);
	printf("\t 產品單價:%s\n", ipad.price);
	printf("\t 產品編號:%s\n", iphone.no);
	printf("\t 產品名稱:%s\n", iphone.name);
	printf("\t 產品單價:%s\n", iphone.price);
	printf("\t 產品編號:%s\n", imac.no);
	printf("\t 產品名稱:%s\n", imac.name);
	printf("\t 產品單價:%s\n", imac.price);
	
	return 0;
}
