#include <stdio.h>
#include <stdlib.h>

void main() {

	int x,y,i;
	
	printf("Digite o primeiro numero:");
	scanf("%d",&x);
	
	printf("Digite o segundo numero:");
	scanf("%d",&y);
	
	for(i=x+1;i<y;i++) {
		if(i%2==0) {
			printf("\n %d",i);i++;
		}
	}
	
	
	//	printf("Hello World\n");
	//system("PAUSE");

}
