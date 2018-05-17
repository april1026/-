#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXSIZE 10
#define MSG "press any key to continue..."
void push (void);
void pop (void);
void printout (void);
int stack[MAXSIZE];
int i = 1, choose;
int *sptr, *full, *empty;
int main (int argc, char *argv[]) {
	sptr = stack;
	empty = stack;
	full = stack + MAXSIZE - 1;
	while (1) {
		printf (" \n === stack operation ===");
		printf (" \n  1. push operation ");
		printf (" \n  2. pop operation ");
		printf (" \n  3. printout stack ");
		printf (" \n  0. quit ");
		printf (" \n =======================");
		printf (" \n 請選擇 [0 - 3] :");
		scanf ("%d", &choose);
		switch (choose) {
			case 1:
				push ();
				break;
			case 2:
				pop ();
				break;
			case 3:
				printout ();
				break;
			case 0:
				exit (0);
			default:
				printf ("\n\n === error input (0 - 3) !");
				break;
		}
		printf (" \n\n %s\n", MSG);
		
		return 0;
	}
	
	void push (void) {
		sptr ++;
		if (sptr == full){
			printf ("\n\n ... 推疊已滿");
			sptr --;
		} else {
			printf ("\n\n 請輸入第 %d 筆資料:", i++);
			scanf ("%d", sptr);
		}
	}
	void pop (void) {
		if (sptr != empty){
			printf ("\n\n ... pop from stack : %3d", *sptr);
			sptr --;
			i --;
		}
	}
		printf ("\n\n ... 堆疊已空");
	
	return 0;
}
