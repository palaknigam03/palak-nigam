//8Count Number of Digits of an Integer...
#include <stdio.h>
int Count(int);
int main() {
  int n,c;
	  printf("Enter an integer: ");
	  scanf("%d", &n);
	  c=Count(n);
	  printf("Number of digits: %d", c);
  }
//DEfination
  int Count(int n)
 {
       int count=0;
	  do {
	    n /= 10;
	    ++count;
	  } while (n != 0);
	return count;
 }
