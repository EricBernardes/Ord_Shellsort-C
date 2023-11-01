#include <stdio.h>
#include <time.h>
#define max 5

void shellsort(int *v) {
  int h = 1;
  int aux, j;
  while (h < max) {
    h = (3 * h) + 1;
  }
  while (h > 1) {
    h = (h / 3);
    for (int i = h; i < max; i++) {
      aux = v[i];
      j = i - h;
      while (j >= 0 && aux < v[j]) {
        v[j + h] = v[j];
        j = j - h;
      }
      v[j + h] = aux;
    }
  }
}

void imprimeVetor(int *v) {
  for (int i = 0; i < max; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");
}

int main() {
  int v[max] = {5, 2, 1, 3, 4};
  shellsort(v);
  imprimeVetor(v);
  return 0;
}