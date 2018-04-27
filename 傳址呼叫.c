#include <stdio.h>
#include <stdlib.h>
void swap(int *, int *);
int main(int argc, char *argv[]) {
	int a = 10, b = 20;
	printf ("main()主函式呼叫swap()函式前，a位址的內容(%x)=%d\n", &a, a);
	printf ("main()主函式呼叫swap()函式前，b位址的內容(%x)=%d\n", &b, b);
	swap(&a, &b);
	printf ("回main()後，a位址的內容(%x)=%d\n", &a, a);
	printf ("回main()後，b位址的內容(%x)=%d\n", &b, b);
	return 0;
}

void swap(int *x, int *y){
	int temp;
	printf ("進入swap()函式交換前，x位址的內容(%x)=%d\n", x, *x);
	printf ("進入swap()函式交換前，y位址的內容(%x)=%d\n\n", y, *y);
	temp = *x;
	*x = *y;
	*y = temp;	
	printf ("進入swap()函式內交換後，x位址的內容(%x)=%d\n", x, *x);
	printf ("進入swap()函式內交換後，y位址的內容(%x)=%d\n", y, *y);
}
