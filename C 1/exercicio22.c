#include <stdio.h>
#include <stdlib.h>

void main() {

	int contador=0,num,soma=0;
	
	while(contador<5 || soma<100) {
		printf("Digite o seu numero: ");
		scanf("%d",&num);
		contador++;
		soma+=num;
	}	
	
	printf("Quantidade de numeros:%d\nSoma:%d",contador,soma);
	
	//	printf("Hello World\n");
	//system("PAUSE");

}
