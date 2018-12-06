#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct TPonto {
	float x;
	float y;
}TPonto;

void LeituraPontos(TPonto *a, int n) {
	int i;
	for(i=0;i<n;i++) {
		printf("Digite o X do ponto N%d:",i+1);
		scanf("%f",&a[i].x);
		printf("Digite o Y do ponto N%d:",i+1);
		scanf("%f",&a[i].y);
		printf("\n\n");
	}
}

void DistanciaPontos(TPonto *a) {
	printf("Distancia entre os X's:%.2f\n",a[0].x-a[1].x);
	printf("Distancia entre os Y's:%.2f\n",a[0].y-a[1].y);
}

void main() {
	
	TPonto pontos[2];
	
	LeituraPontos(pontos,2);
	DistanciaPontos(pontos);
	
	//system("pause");
}
