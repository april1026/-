#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
	struct bcc {
		char name[10];
		int hw;
		int mid;
		int final;
		float avg;
	};
	
	struct bcc david, *ptr;
	ptr = &david;
	printf("\n   ==== 計算機概論成績試算 ====\n\n");
	printf("\t 1. 學生名字   : ");
	gets(ptr->name);
	printf("\t 2. 平時考成績  : ");
	scanf("%d", &ptr->hw);
	printf("\t 3. 期中考成績  : ");
	scanf("%d", &ptr->mid);
	printf("\t 4. 期末考成績  : ");
	scanf("%d", &ptr->final);
	ptr->avg = ptr->hw * 0.3 + ptr->mid * 0.3 + ptr->final * 0.4;
	printf("     =============================    \n");
	printf("\t 5. 學期總平均  : %6.2f \n", ptr->avg);
	printf("\n");
	
	return 0;
}
