//print multiplication table.
#include <stdio.h>
void mulp(int);

int main() {
  int n;
  printf("Enter an integer: ");
  scanf("%d", &n);
  mulp(n);
  return 0;
  }
  void mulp(int n){
  int i;
  for (i = 1; i <= 10; ++i) {
    printf("%d * %d = %d \n", n, i, n * i);
  }
}

