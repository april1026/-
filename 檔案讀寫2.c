#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <io.h>
#define LEN 100
int main() {
	FILE *fptr;
	char fpath[LEN];
	int fno, fsize, price = 0;
	
	printf("請選擇項目 --> 1.開新檔 2.開舊檔");
	if (getch() == '1') {
		printf("\n請輸入新檔案路徑:");
		gets(fpath);
		fptr = fopen(fpath, "w+");
	} else {
		printf("\n輸入欲開啟的檔案路徑:");
		gets(fpath);
		
		fptr = fopen(fpath, "a+");
	}
	
	if (fptr == NULL) {
		printf("開啟檔案失敗，%s 可能不存在\n", fpath);
		exit(0);
	}
	fno = fileno(fptr);
	fsize = filelength(fno);
	printf("\n %s 開檔完成，檔案大小 %d Bytes\n", fpath, fsize);
	char keyin[LEN];
	int i;
	while(true) {
		rewind(fptr);
		printf("\n是否新增資料(Y/N)");
		if (toupper(getche()) == 'Y') {
			printf("\n請輸入要新增的資料:");
			gets(keyin);
			fprintf(fptr, "%s", keyin);
		} else {
			fclose(fptr);
			break;
		}
	}
	
	fptr = fopen(fpath, "r");
	fno = fileno(fptr);
	fsize = filelength(fno);
	printf("\n %s 更新完成，檔案大小 %d Bytes\n", fpath, fsize);
	printf(" %s 資料內容如下:\n", fpath);
	while (fscanf(fptr, "%s", keyin) != EOF) {
		printf("%s", keyin);
	}
	fclose(fptr);
	
	return 0;
}
