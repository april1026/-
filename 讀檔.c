#include <stdio.h>
#include <stdlib.h>
#include <io.h>
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
