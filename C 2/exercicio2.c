#include <stdio.h>
#include <stdlib.h>

int Fatorial(int a) {
	int i,r=a;
	for(i=a-1;i>0;i--) {
		r=r*i;
	}
	return r;
}


void main() {

	int num;
	
	do {
		printf("Digite o seu numero: ");
		scanf("%d",&num);
		if(num<0)
			printf("\nErro tem de ser superior a 0\n\n");
	} while(num<0);

	
	printf("\n\nNumero fatorial: %d",Fatorial(num));
	
	
	// printf("Hello World");
	// system("PAUSE");
}
