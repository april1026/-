#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int *ptr, n, i, search, num = -1;
	printf ("請問要輸入幾個整數:");
	scanf ("%d",  &n);
	ptr = (int*) malloc (sizeof (int) *n );
	for (i = 0; i < n; i++) {
		printf (" 第 %2d 個整數:", i + 1);
		scanf ("%d", ptr + 1);
	}
	printf ("\n");
	printf ("請輸入要搜尋的值:");
	scanf ("%d", &search);
	for (i = 0; i < n; i++) {
		if (* (ptr + 1) == search){
			num = i;
			break;
		}
	}
	printf ("======================\n");
	if (num == -1){
		printf (" 沒有這個數字 %d \n", search);
	} else {
		printf ("%d 是第%d個數字 \n", search, num + 1);
	}
	free (ptr);	
	return 0;
}
