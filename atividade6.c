#include <stdio.h>

int main() {
  int i;
  char verbo[256] = {'\0'};

  printf("Escreva uma palavra que seja um verbo regular: ");
  scanf("%s", verbo);
  i = 0;
  while (verbo[i] != '\0') {
    if (verbo[i] > 96 && verbo [i] < 123) verbo[i] -= 32;
    i++;
  }
  i = 2;
  if (verbo[i] == 'A' && verbo[i+1] == 'R') {
     verbo [i] = '\0';
     verbo[i+1] = '\0';
  }
  printf("EU  %s0\n", verbo);
  printf("TU  %sAS\n", verbo);
  printf("ELE %sA\n", verbo);
  printf("NÓS %sAMOS\n", verbo);
  printf("VÓS %sAIS\n", verbo);
  printf("ELES %sAM\n", verbo);


  return 0;

}