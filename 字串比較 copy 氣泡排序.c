#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char name[5][10];
	char t[10];
	int i, j;
	printf ("-氣泡排氣法(由小到大排序字串)-\n");
	printf ("-----請輸入五位學生的姓名-----\n");
	printf ("\n");
	printf (" 排序前 ->\n");
	for (i = 0; i < 5; i++) {
		printf (" 第 %d 位學生:", i + 1);
		gets (name[i]);
	}
	for (i = 3; i >= 0; i--) {
		for (j = 0; j <= i; j++) {
			if (strcmp(name[j], name[j + 1]) > 0) {
				strcpy (t, name[j]);
				strcpy (name[j], name[j + 1]);
				strcpy (name[j + 1], t);
			}
		}
	}
	
	printf ("\n 排序後 ->\n");
	for (i = 0; i < 5; i++) {
		printf (" %d.->%s\n", i+ 1, name[i]);
	}
	printf ("\n");
	return 0;
}
