#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct grade
{
	char course[10];
	int score;
} peter={"bcc", 80},tom={"math",65};
void swap(struct grade,struct grade);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	printf(" Call By value : \n\n");
	printf("=== main()主函式 呼叫前 === \n");
	printf(" Peter.course = %s \t Peter.score = %d \n",peter.course, peter.score);
	printf(" Tom.course = %s \t Tom.score = %d \n",tom.course, tom.score);
	swap(peter,tom);
	printf("\n\n== 回 main()主函式後 === \n");
	printf(" Peter.course = %s \t Peter.score = %d \n",peter.course, peter.score);
	printf(" Tom.course = %s \t Tom.score = %d \n",tom.course, tom.score);
    printf("\n");
    
    system("PAUSE");
	return 0;
}

void swap(struct grade x1,struct grade x2)
{
	struct grade temp;
	printf("\n\n==== 進入swap()函式內交換前：\n");
	printf(" Peter.course = %s \t Peter.score = %d \n",x1.course, x1.score);
	printf(" Tom.course = %s \t Tom.score = %d \n",x2.course, x2.score);
    
    temp=x1;
    x1=x2;
    x2=temp;
    printf(" \n\n==== 進入swap()函式內交換後 : \n");
   	printf(" Peter.course = %s \t Peter.score = %d \n",x1.course, x1.score);
	printf(" Tom.course = %s \t Tom.score = %d \n",x2.course, x2.score);
}
