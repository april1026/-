#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main(int argc, char *argv[]) {
	
	int i, count;
	char name[10][15];
	
	for (i = 0; i < 10; i++) {
		printf ("請輸入 %d 號同學的英文名字:", i + 1);
		gets (name[i]);
		if (strcmp (name[i], "stop") == 0) {
			count = --i;
			break;
		}
	}
	
	printf ("\n共輸入 %d 位同學的英文名字\n", count + 1);
	printf ("\n==========================\n");
	
	for (i = 0; i <= count; i++) {
		printf ("\n==> 座號 %d 號同學的英文名字:%s\n", i + 1, name[i]);
	}
	printf ("\n");
	
	return 0;
}
