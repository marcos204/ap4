#include <stdio.h>
int main()
{
int dia, mes, ano;
printf("digite o dia :\n");
scanf("%d",&dia);
printf("digite o mes :\n");
scanf("%d",&mes);
printf("digite o ano :\n");
scanf("%d",&ano);

printf("Hoje é em br %d/%d/%d.\n", dia, mes, ano);
printf("Hoje é em us %d/%d/%d.\n", mes, dia, ano);
return 0;
}