#include <stdio.h>
#include <stdlib.h>

void main() {

	int n,i;
	float num,soma=0;
	
	do {
		printf("Quantos alunos: ");
		scanf("%d",&n);
		if(n<1)
			printf("Nao pode ser menos que um aluno");
	} while(n<1);
	
	for(i=0;i<n;i++) {
		do {
			printf("\nNota do aluno %d: ",i+1);
			scanf("%f",&num);
			if(num<0 || num>20)
				printf("Nota invalida\n\n");
		} while(num<0 || num>20);
		soma+=num;
	}
	printf("Media da turma: %.2f",(float)soma/n);
	
	
	//	printf("Hello World\n");
	//system("PAUSE");

}
