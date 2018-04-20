#include <stdio.h>
#include <stdlib.h>

double fid(double);

int main(int argc, char*argv[]) {
  
  printf("費氏f(6)第六項係數為: %lf",fid(6));
  printf("費氏f(40)第40項係數為: %lf",fid(40));
  return 0;
}
double fid(double n){
  if(n == 1 || n == 2)
    return 1;
  else
    return fid(n-1) + fid(n-2);
}
