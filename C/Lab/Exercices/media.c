/*
Uma determinada escola, cujo cálculo da média é realizado com as quatro notas
bimestrais que determinam a aprovação ou reprovação dos seus alunos. Considere
ainda que o valor da média deve ser maior ou igual a 7 para que haja aprovação.
*/

#include <stdio.h>
#include <string.h>
float media;
char resultado[10];

int main(void) {
  float notas[4];
  char *bimestres[] = {
    "primeiro bimestre", 
    "segundo bimestre",
    "terceiro bimestre", 
    "quarto bimestre"
  };
  
  printf("Digite as suas notas bimestrais.\n");
  for (int i = 0; i < 4; i++) {
    printf("Digite a nota do %s: ", bimestres[i]);
    scanf("%f", &notas[i]);
  }

  media = ((notas[0] + notas[1] + notas[2] + notas[3]) / 4);
  strcpy(resultado, media >= 7 ? "Aprovado" : "Reprovado");

  printf("Sua média é: %.2f \n", media);
  printf("%s", resultado);

  return 0;
}