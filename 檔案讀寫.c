#include <stdio.h>
#include <stdlib.h>
#include#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <io.h>
#define LEN 100
int main() {
	FILE *fptr;
	char fpath[LEN];
	int fno, fsize;
	
	printf("輸入欲開啟的檔案路徑:");
	gets(fpath);
	
	fptr = fopen(fpath, "a+");
	if (fptr == NULL) {
		printf("開啟檔案失敗，%s 可能不存在\n", fpath);
		exit(0);
	}
	fno = fileno(fptr);
	fsize = filelength(fno);
	printf("\n %s 開檔完成，檔案大小 %d Bytes\n", fpath, fsize);
	char ch;
	char keyin[LEN];
	int i;
	while(true) {
		rewind(fptr);
		while((ch = fgetc(fptr)) != EOF) {
			printf("%c", ch);
		}
		printf("\n是否新增資料(Y/N)");
		if (toupper(getche()) == 'Y') {
			printf("\n請輸入要新增的資料:");
			gets(keyin);
			for(i = 0; i < strlen(keyin); i++) {
				fputc(keyin[i], fptr);
			}
			fputc('\n', fptr);
		} else {
			fclose(fptr);
			break;
		}
	}
	return 0;
}  <io.h>
#define LEN 100
int main() {
	FILE *fptr;
	char fpath[LEN];
	int fno, fsize;
	
	printf("輸入欲開啟的檔案路徑:");
	gets(fpath);
	
	fptr = fopen(fpath, "r");
	if (fptr == NULL) {
		printf("開啟檔案失敗，%s 可能不存在\n", fpath);
		exit(0);
	}
	fno = fileno(fptr);
	fsize = filelength(fno);
	printf("\n %s 開檔完成，檔案大小 %d Bytes\n", fpath, fsize);
	char ch;
	while((ch = fgetc(fptr)) != EOF) {
		printf("%c", ch);
	}
	fclose(fptr);
	return 0;
} 
