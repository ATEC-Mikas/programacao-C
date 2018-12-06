#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {

	int cont=0,i=0;
	char letra;
	char texto[100];
	
	fflush(stdin);
	printf("Digite o caracter: ");
	scanf("%c",&letra);
	fflush(stdin);

	fflush(stdin);
	printf("Digite a frse: ");
	scanf("%[^\n]s",&texto);
	fflush(stdin);	
	
	while(texto[i]!= '\0') {
		if(texto[i]==letra) {
			cont++;
		}
		i++;
	}
	
	printf("O caracter \"%c\" aparece %d vezes.",letra,cont);
	// printf("Hello World");
	// system("PAUSE");
}
