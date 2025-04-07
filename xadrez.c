#include <stdio.h>

int main() {
   
  // Movimento da Torre (5 casas para a direita) usando for
  printf("Movimento da Torre:\n");
  for (int i = 1; i <= 5; i++) {
      printf("Direita\n");
  }

  // Movimento do Bispo (5 casas na diagonal para cima e à direita) usando while
  printf("\nMovimento do Bispo:\n");
  int casasBispo = 1;
  while (casasBispo <= 5) {
      printf("Cima, Direita\n");
      casasBispo++;
  }

  // Movimento da Rainha (8 casas para a esquerda) usando do-while
  printf("\nMovimento da Rainha:\n");
  int casasRainha = 1;
  do {
      printf("Esquerda\n");
      casasRainha++;
  } while (casasRainha <= 8);

  return 0;
}