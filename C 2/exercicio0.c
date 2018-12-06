#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {

	int cont=0,i=0,j;
	char vogais[5]="aeiou";
	char texto[100];
	

	fflush(stdin);
	printf("Digite a frase: ");
	scanf("%[^\n]s",&texto);
	fflush(stdin);	
	
	while(texto[i]!= '\0') {
		for(j=0;j<5;j++) {
			if(texto[i]==vogais[j]) {
				cont++;
			}
		}
		i++;
	}
	
	printf("Aparecem %d vogais.",cont);
	// printf("Hello World");
	// system("PAUSE");
}
