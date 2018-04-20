#include <stdio.h>
#include <stdlib.h>

int comb(int, int);

int main(int argc, char*argv[]) {
  
  int numN, numM, ans;
  printf("請輸入要計算組合的兩個數\n");
  printf("請輸入第一個數N:");
  scanf("%d", &numN);
  printf("請輸入第二個數M:");
  scanf("%d", &numM);
  
  if(numN >= numM){
    ans = comb(numN, numM);
    printf("\n組合公式comb(%d, %d) = %d", numN, numM, ans);
  }else{
    printf("N必須大於M");
  }
  
  return 0;
}
int comb(int n, int m){
  if(n == 0 || n == m)
    return 1;
  else
    return comb(n-1, m) + comb(n-2, m-1);
}
