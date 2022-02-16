#include <stdio.h>
#define tam 10

int main() {
	int vetor[tam], valor, i, achou=0;
	for (i=0;i<tam;i++)
		scanf("%d", &vetor[i]);
	scanf("%d", &valor);
	for (i=0;i<tam;i++){
		if (valor==vetor[i])
			achou=1;
	}
	if (achou)
		printf("O valor %d estÃ¡ no vetor.", valor);
	else
		printf("O valor %d nÃ£o estÃ¡ no vetor.", valor);
	return 0;
}