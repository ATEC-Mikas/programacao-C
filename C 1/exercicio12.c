#include <stdio.h>
#include <stdlib.h>

void main() {
	
	int idade,solteiro;
	char x;
	
	do {
		printf("Idade: ");
		scanf("%d",&idade);
		if(idade<0 || idade>100)
			printf("Idade invalida");
	} while(idade<0 || idade>100);
	
	do {
		printf("Solteiro? (s/n): ");
		x = getch();
		if(x == 's' || x == 'S') {
			solteiro=1;
			putchar(x);
		}
		if(x == 'n' || x == 'N') {
			solteiro=0;
			putchar(x);
		}
	} while(x != 's' && x != 'S' && x != 'n' && x != 'N' );
	
	printf("\n");
	
	if(solteiro==1)
		if(idade<25)
			printf("Grupo 1");
		else
			printf("Grupo 2");
	else 
		if(idade<34)
			printf("Grupo 3");
		else 
			printf("Grupo 4");
		
		
	
	
	
	//	printf("Hello World\n");
	//system("PAUSE");
	
}
