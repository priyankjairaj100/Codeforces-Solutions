#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin>>n;

  printf("%d\n", n / 2);
  printf("%d", n % 2 ? 3 : 2);

  for(int i = n - 2; i >= 2; i -= 2) {
    printf(" 2");
  }
  printf("\n");
  return 0;
}