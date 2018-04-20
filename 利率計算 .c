#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int yr_total (int, int, float);
int mon_total (int, int, float);


int main(int argc, char*argv[]) {
  
  int money, years, yrate;
  float per_rate;
  
  printf("== 複利率本利和試算 ==\n");
  printf("1.請輸入本金:");
  scanf("%d", &money);
  printf("2.請輸入年利率:");
  scanf("%d", &yrate);
  printf("3.幾年後領回:");
  scanf("%d", &years);
  per_rate = (float)yrate/100;
  printf ("\n");
  printf (" *** 每年計息一次，%d年後領回本利和:%d", years, yr_total(money, years, per_rate));
  printf("\n\n");
  printf (" *** 每月計息一次，%d年後領回本利和:%d", years, mon_total(money, years, per_rate));
  printf("\n\n");
  
  return 0;
}

int yr_total(int vmoney, int vyears, float vper_rate){
    return vmoney * pow (1 + vper_rate, vyears);
}

int mon_total(int vmoney, int vyears, float vper_rate){
    return vmoney * pow (1 + vper_rate / 12, vyears * 12);
}
