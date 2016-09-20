#include <stdio.h>

int main(){
  signed x;
  printf("x\t\tx<<3\t\t(logic)x>>2\t(arith)x>>2\n");
  while (1) {
    printf("0x");scanf("%x", &x);
    printf("\033[A\33[2KT\r");
    printf("0x%.8X", x);
    printf("\t0x%.8X", x<<3);
    printf("\t0x%.8X", ((unsigned)x>>2));
    printf("\t0x%.8X", x>>2);
    printf("\n");
  }
  return 0;
}
