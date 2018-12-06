#include <stdio.h>
#include <stdlib.h>

void main() {

	int n,i,contador=0,idade,num;
	
	do {
		printf("Quantos alunos: ");
		scanf("%d",&n);
		if(n<1)
			printf("Nao pode ser menos que um aluno");
	} while(n<1);
	
	do {
		printf("Idade a ser superior: ");
		scanf("%d",&idade);
		if(n<1)
			printf("Nao ter menos que um ano");
	} while(n<1);
	
	for(i=0;i<n;i++) {
		do {
			printf("\nIdade do aluno %d: ",i+1);
			scanf("%d",&num);
			if(num<1 || num>100)
				printf("Nao pode ter menos que um ano\n\n");
			else if(num > idade)
					contador++;
		} while(num<1 || num>100);
	}
	printf("\n\nPercentagem da turma mais velha que %d: %.2f",idade,(float)contador*100/n);
	
	
	//	printf("Hello World\n");
	//system("PAUSE");

}
