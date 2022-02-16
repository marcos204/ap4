#include <stdio.h>
#define LIM 10
int main(){
float notas[LIM],soma=0.0, media;
int i=0;
for (i=1; i<LIM; i++) {
printf("Digite a nota do aluno %d: ",i);
scanf("%f",&notas[i]);
soma+=notas[i];
}
media = soma/LIM;
printf("Media das notas: %.2f e \n",media);
for (i=1; i<LIM; i++) {
if (notas[i]>= media)
printf("o aluno %d tem nota %.2f maior que a media.",i,notas[i]);
}
return 0;
}
