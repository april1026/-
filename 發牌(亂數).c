#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc,char *argv[])
{
	int card[52];
	int i;
	for (i = 0; i < 52; i++) {
		card[i] = (i + 1);
	}
	
	int suffled[52];
	int rem = 52;
	srand((unsigned)time(NULL));
	for (i = 0; i < 52; i++) {
		int index;
		index = rand() % rem;
		suffled[i] = card[index];
		rem--;
		card[index] = card[rem];
	}
	
	char *four_people[4] = {"東", "西", "南", "北"};
	for (i = 0; i < 52; i++) {
		if ((i % 13) == 0)
			printf ("\n=== %s方牌 ===\n", four_people[i/13]);
		
		if (((suffled[i] - 1) / 13) == 0)
			printf ("黑桃");
		else if (((suffled[i] - 1) / 13) == 1)
			printf ("梅花");
		else if (((suffled[i] - 1) / 13) == 2)
			printf ("愛心");
		else if (((suffled[i] - 1) / 13) == 3)
			printf ("方塊");
		
		printf ("%d ", suffled[i] % 13 + 1);
	}
}
