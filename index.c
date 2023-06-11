#include <stdio.h>

int main(void) {
  system ("clear");
  int N, Fat=1;
  
  printf("coloque o numero: ");
  scanf("%i",&N);
  
  while (N > 0) {
    Fat = Fat * N;
    N = N - 1;
  }
  printf("N fatorial é %i",Fat);
  return 0;
}