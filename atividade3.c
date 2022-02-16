
#include <stdio.h>
int main ()
{
int cod[10], quant[10];
float valor[10], total_cada_produto[10],total_nfc;
int i;
for (i=0; i<10; i++) {
printf ("Digite o codigo, a quantidade e o valor do produto %d\n", i+1);
scanf ("%d%d%f", &cod[i], &quant[i], &valor[i]);
total_cada_produto[i]=(quant [i]*valor[i]);
}
for (i=0; i<10; i++) {
printf ("codigo: %d, valor de cada produto: %f\n", cod[i], 
total_cada_produto[i]);
total_nfc=total_nfc+total_cada_produto[i];
}
for(i=0; i<10; i++)
total_nfc=total_nfc+total_cada_produto[i];
printf("total da nota fiscal=%2.f\n",total_nfc);
return 0;
}