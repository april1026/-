#include <stdio.h>
#include <stdlib.h>

int a, b, c=30;

void printout();

int main(int argc, char*argv[]) {
  
  a=10;
  b=20;
  
  printout();
  
  printf("\n\n in main-block :");
  printf("\n a= %d", a);
  printf("\n b= %d", b);
  printf("\n c= %d", c);
  
  if(1){
    int a=100;
    float b=3.6;
    
    printf("\n\n in if-block :");
    printf("\n a= %d", a);
    printf("\n b= %f", b);
    printf("\n c= %d", c);
  }
  
  printf("\n\n exit if-block but still in main-block :");
  printf("\n a= %d", a);
  printf("\n b= %d", b);
  printf("\n c= %d", c);
  
  printout();
  
  return 0;
}

void printout(){
  int d=40;
  
  printf("\n\n in printout function :");
  printf("\n a= %d", a);
  printf("\n b= %d", b);
  printf("\n c= %d", c);
  printf("\n d= %d", d);
}
