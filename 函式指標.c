#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 80
#define MSG1 "請輸入英文字串"
#define MSG2 "字串反向顯示" 

char *reverse(char[]);

int main(int argc, char *argv[]) {
	char str1[BUFSIZE];
	char *ptr1;
	printf ("\n%s", MSG1);
	gets (str1);
	
	ptr1 = reverse(str1);
	printf ("\n%s", MSG2);
	puts (ptr1);
	printf ("\n");
	
	return 0;
}

char *reverse (char str2[]) {
	char *ptr2, *new_ptr;
	int i, j;
	int strcount = strlen(str2);
	new_ptr = (char*)malloc(sizeof(char)*strcount);
	ptr2 = str2;
	
	for (i = strcount - 1, j = 0; i >= 0; i--, j++) {
		*(new_ptr + j) = *(ptr2 + i);
	}
	*(new_ptr + j) = '\0';
	return new_ptr;
}
