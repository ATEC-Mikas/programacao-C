#include <stdio.h>
#include <stdlib.h>

void main() {

	int contador=0,num,maior,flagMaior=0;
	
	while(contador!=5) {
		printf("Digite o seu numero: ");
		scanf("%d",&num);
		if(num%2==0)
		{
		 	if(flagMaior==0){
			 flagMaior=1;
			 maior=num;
			 }  
			else 
			if(num>maior) {
			maior=num;
			}
		}
		else {
			contador++;
		}
	}	
	
	if(flagMaior==0) 
		printf("Nao foi inserido nenhum numero par");
	else 
		printf("Maior numero par: %d",maior);
	
	//	printf("Hello World\n");
	//system("PAUSE");

}
