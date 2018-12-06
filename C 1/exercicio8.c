#include <stdio.h>
#include <stdlib.h>

void main() {
	
	int num;
	
	do {
		printf("Digite um numero:");
		scanf("%d",&num);
		if(num<100 || num>999)
			printf("Erro! tem de ser entre 100 e 999\n\n");
	} while (num<100 || num>999);
	
	
	printf("Primeiro numero: %d\nSegundo numero: %d\nTerceiro numero: %d\n",num/100,((num%100)-(num%10))/10,num%10);
	
	//	printf("Hello World\n");
	// system("PAUSE");
	
}
