#include <stdio.h>
#include <stdlib.h>

//C
int *cria_um_vetor_zerado_c(int n) {
<<<<<<< HEAD
    int rv[n];
    for (int i = 0; i < n; i++)
        rv[i] = 0;
    return rv;
=======
  int *rv = (int *) malloc(n * sizeof(int));
  for (int i = 0; i < n; i++)
    rv[i] = 0;
  return rv;
>>>>>>> f1b1fa0310785b45c2a427e7003259f404c339b8
}

int main() {
  int *vetor = cria_um_vetor_zerado_c(10);
  printf("%d\n", vetor[0]);
}