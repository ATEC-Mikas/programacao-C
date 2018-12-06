#include <stdio.h>
#include <stdlib.h>


void LerHora(int *a, int *b, int *c){
	do{
		printf("Insira a hora (HH:MM:SS) : ");
		scanf("%d:%d:%d",&*a,&*b,&*c);
		if(*a<0 || *b<0 || *c<0 || *a>23 || *b>60 || *c>60)
			printf("\nErro! hora invalida\n\n");
	} while(*a<0 || *b<0 || *c<0 || *a>23 || *b>60 || *c>60);
}

int ConverterSegundos(int h,int m,int s) {
	return ((3600*h)+(60*m)+s);
}

void ConverterHoras(int seg) {
	printf("Diferenca de segundos: %d \n\n\n",seg);
	printf("Horas: %d\n",seg/3600);
	seg=seg%3600;
	printf("Minutos: %d\n",seg/60);
	seg=seg%60;
	printf("segundos: %d\n",seg);
}

void main() {
	int hora1,minuto1,segundo1,hora2,minuto2,segundo2;
	
	LerHora(&hora1,&minuto1,&segundo1);
	LerHora(&hora2,&minuto2,&segundo2);

	
	ConverterHoras(abs(ConverterSegundos(hora1,minuto1,segundo1)-ConverterSegundos(hora2,minuto2,segundo2)));
	
	
	// printf("Hello World");
	// system("PAUSE");
}
