#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct STrab {
	char nome[50];
	int faltas[12];
} STrab;


void LeituraFuncionarios(STrab *a, int n) {
	int i,j;
	for(i=0;i<n;i++) {
		printf("Nome do trabalhador N%d :",i+1);
		scanf("%s",&a[i].nome);
		strlwr(a[i].nome);
		for(j=0;j<12;j++) {		
			printf("Falta no mes %d :",j+1);
			scanf("%d",&a[i].faltas[j]);

		//DEBUG TIME
//			a[i].faltas[j]=j*i;
		}
		printf("\n\n");
	}
}

int ContarFaltas(STrab *a,int n,char * nome) {
	int soma=0,i,num=-1;
	for (i=0;i<n;i++) {
		if(strcmp(a[i].nome,nome)==0) {
			num=i;
			break;
		}
	}
	if(num==-1) {
		return -1;
	}
	
	for(i=0;i<12;i++) {
		soma+=a[num].faltas[i];
	}
	
	return soma;
}

char * MaisFaltoso(STrab *a, int n) {
	int soma,somamaior=0,maior,i,j;
	for (i=0;i<n;i++) {
		soma=0;
		for(j=0;j<12;j++) {
			soma+=a[i].faltas[j];
		}
		if(soma>somamaior) {
			somamaior=soma;
			maior=i;
		}
	}
	if(somamaior==0) {
		return "ninguem";
	}
	
	return a[maior].nome;
}

int FaltasMes(STrab *a, int n) {
	int i,j,mes[12],m=0;

	for(i=1;i<12;i++){
		mes[i]=0;
	}
	
	for(i=0;i<n;i++) {
		for(j=0;j<12;j++) {
			mes[j]=a[i].faltas[j];
		}
	}
	
	for(i=1;i<12;i++){
		if(mes[i]>mes[m]) {
			m=i;
		}
	}
	
	return m;
	
}

void main() {
	
	STrab VTrab[20];
	int NT,r;
	
	do {
		printf("Digite numero de trabalhadores:");
		scanf("%d",&NT);
		if(NT<=0) {
			printf("Tem de ser superior a 0");
		}
	} while(NT<=0);
	
	LeituraFuncionarios(VTrab,NT);
	
	char nome[50];
	
	printf("Nome do Funcionario a ver faltas:");
	scanf("%s",&nome);
	strlwr(nome);	
	
	r=ContarFaltas(VTrab,NT,nome);
	
	if(r!=-1){
		printf("Faltas do %s durante o ano: %d",nome,r);
	}
	else {
		printf("Nome \"%s\" nao encontrado",nome);
	}
	
	printf("\nO %s foi o/a que mais faltou este ano.",MaisFaltoso(VTrab,NT));
	
	printf("\nO mes %d foi o que se registou a maior quantidade de faltas",FaltasMes(VTrab,NT)+1);
	
	//system("pause");
}
