#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {

	float x1,x2,y1,y2;
	
	printf("Posicao 1 X: ");
	scanf("%f",&x1);
	printf("Posicao 1 Y: ");
	scanf("%f",&y1);

	printf("Posicao 2 X: ");
	scanf("%f",&x2);
	printf("Posicao 2 Y: ");
	scanf("%f",&y2);
	
	printf("Distancia: %.2f",sqrt(powf(x2-x1,2) + powf(y2-y1,2)));
		
	
	//	printf("Hello World\n");
	//system("PAUSE");

}
