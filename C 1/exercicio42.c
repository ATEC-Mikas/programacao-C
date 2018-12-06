#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {

	int num,tentativa,i;	
	
	for(i=0;i<rand() % 100;i++) {
		num=rand() % 20;
	}
	
	printf("Advinhe o numero:");
	scanf("%d",&tentativa);
	
	while(tentativa!=num) {
		if(tentativa<num) {
			printf("Tente mais alto");
		} 
		else {
			if(tentativa>num) {
				printf("Tente mais baixo");
			}
		}
		if(tentativa!=num) {
			printf("\n\nAdvinhe o numero:");
			scanf("%d",&tentativa);
		}
	}
	
	printf("\n\n--------------------------\nParabens! acertou no numero.\nNumero: %d\n--------------------------",num);
	
	//	printf("Hello World\n");
	//system("PAUSE");

}
