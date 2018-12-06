#include <stdio.h>
#include <stdlib.h>

void main() {
	
	int horas;
	
	do {
		printf("Digite o numero de horas:");
		scanf("%d",&horas);
		if (horas<0)
			printf("As horas nao podem ser negativas\n\n");
	} while(horas<0);


	if(horas>36)
		printf("Valor a pagar: %.2f euros",270+((horas-36)*10.0));
		//36*7.5 = 270
	else
		printf("Valor a pagar: %.2f euros",horas*7.5);
		
	
	
	//	printf("Hello World\n");
	// system("PAUSE");
	
}
