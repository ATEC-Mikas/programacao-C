#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {

	int num,contador1=0,contador2=0;
	
	printf("Digite o seu numero:");
	scanf("%d",&num);
	
	while(num!=0) {
		if(num%2==0) 
			contador1++;
		printf("Digite o seu numero:");
		scanf("%d",&num);
	}
	
	printf("\n\nSaiu da primeira sequencia\n\n");
	printf("Digite o seu numero:");
	scanf("%d",&num);
	
	while(num!=-1) {
		if(num%2==0) {
			contador2++;
		}
		printf("Digite o seu numero:");
		scanf("%d",&num);
	}
	
	printf("\n\nSaiu da segunda sequencia\n\n");
	
	if(contador1>contador2) {
		printf("Primeira sequencia tem mais pares.");
	}
	else {
		if(contador2>contador1) {
			printf("Segunda sequencia tem mais pares.");
		}
		else {
			printf("Tem a mesma quantidade de pares");
		}
	}
		
	
	//	printf("Hello World\n");
	//system("PAUSE");

}
