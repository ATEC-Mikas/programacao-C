#include <stdio.h>
#include <stdlib.h>

void main() {
	
	float notaEscrito,notaOral;
	
	do {
		printf("Digite a nota do exame escrito:");
		scanf("%f",&notaEscrito);
		if (notaEscrito<0 || notaEscrito>20)
			printf("A nota tem de entre 0 e 20\n\n");
	} while(notaEscrito<0 || notaEscrito >20);

	do {
		printf("Digite a nota do exame oral:");
		scanf("%f",&notaOral);
		if (notaOral<0 || notaOral >20)
			printf("A nota tem de entre 0 e 20\n\n");
	} while(notaOral<0 || notaOral >20);
	
	if ((notaEscrito*0.70)+(notaOral*0.30)>=10)
		printf("O aluno passou");
	else 
		printf("o aluno reprovou");
	printf("\n\n\n\n%.2f",(notaEscrito*0.70)+(notaOral*0.30));
	
	//	printf("Hello World\n");
	// system("PAUSE");
	
}
