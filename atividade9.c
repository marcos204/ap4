#include <stdio.h>
#include <stdlib.h>

int main() {
  int i;
  int matricula[10] = {0};
  char email[10][256] = {'\0'};
  int mat;

  for (i = 0; i < 10; ++i) {
    printf ("Insira a matrícula do aluno %d : ", i+1);
    scanf("%d", &matricula[i]);
    while (getchar() -'\n');
    printf("Insira o e-mail do aluno %d : ", i+1);
    scanf("%s", email[i]);
  }
  printf("Insira a matricula do aluno para que se ache seu e-mail: ");
  scanf("%d", &mat);

  for (i = 0; i < 10; ++i) {
    if (matricula[i] == mat) {
      printf("E-mail do aluno: %s\n", email[i]);
    }
  }
return 0;
}