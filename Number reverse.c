#include <stdio.h>

int main() {

  long long n, reverse = 0, remainder;
  scanf("%lld", &n);

  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  printf("%lld",reverse);

  return 0;
}
