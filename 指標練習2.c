#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a = 3, b = 6, c = 9, *ptr;
	printf(" expression  (address) = content\n");
	printf(" ==========  =========   ========\n");
	printf("     &a      (%d) = %d\n", &a, a);
	printf("     &b      (%d) = %d\n", &b, b);
	printf("     &c      (%d) = %d\n", &c, c);
	ptr = &a;
	printf("  ptr = &a     (ptr)   = %d\n", ptr);
	printf("   *ptr        (ptr)   = %d\n", *ptr);
	ptr -= 2;
	printf("  ptr -= 2     (ptr)   = %d\n", ptr);
	printf("   *ptr        (ptr)   = %d\n", *ptr);
	ptr++;
	printf("    ptr++      (ptr)   = %d\n", ptr);
	printf("   *ptr        (ptr)   = %d\n", *ptr);
	
	return 0;
}
