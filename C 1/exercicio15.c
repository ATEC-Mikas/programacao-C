#include <stdio.h>
#include <stdlib.h>

void main() {

	float salario;
	int codigo;

	do {
		printf("Salario atual:");
		scanf("%f",&salario);
		if(salario<0)
			printf("Salario nao pode ser negativo\n\n");
	} while(salario<0);

	do {
		printf("Codigo de cargo:");
		scanf("%d",&codigo);
		if(codigo<0)
			printf("codigo nao pode ser negativo\n\n");
	} while(codigo<0);
	printf("\n\n\n");
	
	switch(codigo) {
		case 101:
			printf("Salario antigo: %.2f\nSalario novo: %.2f\nDiferenca: %.2f",salario,salario*1.25,(salario*1.25)-salario);break;
		case 102:
			printf("Salario antigo: %.2f\nSalario novo: %.2f\nDiferenca: %.2f",salario,salario*1.20,(salario*1.20)-salario);break;
		case 103:
			printf("Salario antigo: %.2f\nSalario novo: %.2f\nDiferenca: %.2f",salario,salario*1.15,(salario*1.15)-salario);break;
		default: 
			printf("Salario antigo: %.2f\nSalario novo: %.2f\nDiferenca: %.2f",salario,salario*1.10,(salario*1.10)-salario);
	}







	//	printf("Hello World\n");
	//system("PAUSE");

}
