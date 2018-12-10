#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 LerVetor
 
 Lê um vetor normalmente
 LerVetor(int NomeVetor,int NumeroDeNumeros);
*/
void LerVetor(int * vetor, int n) {
	int i;
	for(i=0;i<n;i++) {
		printf("[%d] Digite o numero:",i+1);
		scanf("%d",&vetor[i]);
	}
}

/*
 ProcurarVetor
 
 Procura o vetor pelo numero pedido
 
 LerVetor(int NomeVetor, int NumeroDeNumeros);
 Retorna a posicao do numero pedido ou -1 caso não seja encontrado 
*/
int ProcurarVetor(int * vetor, int n, int q, int * pos) {
	int i,c=0;
	for(i=0;i<n;i++) {
		if(vetor[i]==q) {
			pos[c]=i;
			c++;
		}
	}
	
	return c;
}

/*
 SegundoMaior
 
 Procura por um vetor pelo segundo valor mais alto
 SegundoMaior(int NomeVetor,int NumeroDeNumeros);
 Retorna a posicao do segundo maior numero.
*/
int SegundoMaior(int * vetor, int n) {
	int maior=0,segundomaior,i;
	for(i=1;i<n;i++){
		if(vetor[i]>vetor[maior]) {
			segundomaior=maior;
			maior=i;
		} else {
			if(vetor[i]>vetor[segundomaior]) {
				segundomaior=i;
			}
		}
	}
	return segundomaior;
}

/*
 LerVetorRacista
 
 Lê um vetor sem possibilitar numeros repetidos
 LerVetor(int NomeVetor,int NumeroDeNumeros);
*/
void LerVetorRacista(int * vetor, int n) {
	int i,j,flag;
	for(i=0;i<n;i++){
		do {
			flag=0;
			printf("[%d] Digite o numero:",i+1);
			scanf("%d",&vetor[i]);
			for(j=0;j<i;j++) {
				if(vetor[i]==vetor[j]) {
					flag=1;
					printf("Numero repetido digite novamente\n\n");
				}
			}
		}while(flag==1);
	}
}

/*
 RacismoNegativo
 
 Põe a 0 todos os numeros negativos
 RacismoNegativo(int NomeVetor,int NumeroDeNumeros);
 Retorna o numero de valores alterados
*/

int RacismoNegativo(int * vetor, int n) {
	int i,contador=0;
	for(i=0;i<n;i++) {
		if(vetor[i]<0) {
			contador++;
			vetor[i]=0;
		}
	}	
	
	return contador;
}

/*
 ImprimirVetor
 
 Imprime um vetor
 ImprimirVetor(int NomeVetor,int NumeroDeNumeros);
*/
void ImprimirVetor(int * vetor, int n ) {
	int i;
	printf("\n");
	for(i=0;i<n;i++) {
		printf("[%d] - %d\n",i+1,vetor[i]);
	}
	printf("\n");
}

/*
 VerificarVetor
 
 Verifica se os valores de um vetor são iguais, se são todos diferentes, ou se há valores repetidos no
vetor.
 VerificarVetor(int NomeVetor,int NumeroDeNumeros);
 Retorna uma string com a resposta
*/
char * VerificarVetor(int * vetor, int n) {
	int i,j,contador=0;
	
	for(i=0;i<n-1;i++) {
		for(j=i+1;j<n;j++) {
			if(vetor[i]==vetor[j]) {
				contador++;
				break;
			}
		}
	}
	if(contador==n-1) {
		return "Todos Iguais";
	} else {
		if(contador==0) {
			return "Todos Diferentes";
		} else {
			return "Repetidos";
		}
	}
}

/*
 LerVetorDigito
 
 Lê um vetor permintindo apenas um digito
 LerVetorDigito(int NomeVetor,int NumeroDeNumeros);
*/
void LerVetorDigito(int * vetor, int n) {
	int i;
	for(i=0;i<n;i++){
		do {
			printf("[%d] Digite o numero:",i+1);
			scanf("%d",&vetor[i]);
			if(vetor[i]>9 || vetor[i]<-9) {				
				printf("Nao pode ser com dois digitos\n\n");
			}
		}while(vetor[i]>9 || vetor[i]<-9);
	}
}


/*
 ParVetor
 
 Verifica se o vetor é constituído, ou não, por valores pares e ímpares alternados.
 ParVetor(int NomeVetor,int NumeroDeNumeros);
*/
int ParVetor(int * vetor, int n) {
	int i;
	if(vetor[0]%2==0) {
		for(i=1;i<n;i++){
			if(vetor[i]%2!=i%2) {
				return -1;
			}
		}
	} else {
		for(i=1;i<n;i++){
			if(vetor[i]%2==i%2) {
				return -1;
			}
		}
	}
	return 1;
}

/*
 LerVetorDado
 
 Lê um vetor apenas permitindo numeros entre 2 e 12
 LerVetorDado(int NomeVetor,int NumeroDeNumeros);
*/
void LerVetorDado(int * vetor, int n) {
	int i;
	for(i=0;i<n;i++){
		do {
			printf("[%d] Digite o numero:",i+1);
			scanf("%d",&vetor[i]);
			if(vetor[i]<2 || vetor[i]>12) {				
				printf("Tem de ser entre 2 e 12\n\n");
			}
		}while(vetor[i]<2 || vetor[i]>12);
	}
}

/*
 ResultadoMaisComum
 
 Verifica qual o resultado mais comum de um resultado de dois dados atirados
 ResultadoMaisComum(int NomeVetor,int NumeroDeNumeros);
*/
int ResultadoMaisComum(int * vetor, int n) {
	int i,contador[13],maior=2;
	
	for(i=2;i<=12;i++) {
		contador[i]=0;
	}
	
	for(i=0;i<n;i++) {
		contador[vetor[i]]++;
	}
	
	for(i=3;i<=12;i++) {
		if(contador[i]>contador[maior]){
			maior=i;
		}
	}
	return contador[maior];
}

void main() {

	int n,i;
	
	do{
		printf("Digite quantos digitos pretende inserir:");
		scanf("%d",&n);
		if(n<=0) {
			printf("Tem de ser superior a 0");
		}
	} while(n<=0);
	
	int vetor[n];
	
//	LerVetor(vetor,n);
//	LerVetorRacista(vetor,n);
//	LerVetorDigito(vetor,n);
	LerVetorDado(vetor,n);


//	printf("Valor mais comum: %d",ResultadoMaisComum(vetor,n));
	
// // Par vetor	
//	int r;
//	r=ParVetor(vetor,n);
//	if(r==1) {
//		printf("Tem valores pares e impares alternados");
//	} else {
//		printf("Nao tem valores pares e impares alternados");
//	}

	

//	printf("O Vetor tem os valores: %s",VerificarVetor(vetor,n));	
	
//	printf("Numero de numeros alterados: %d\n",RacismoNegativo(vetor,n));
	
//	ImprimirVetor(vetor,n);


//	// Segundo Maior Mais alto
//	if(n>1) 
//		printf("Segundo maior valor: %d\n",vetor[SegundoMaior(vetor,n)]);
	
	
// // ProcurarVetor	
//	int q,r,pos[n];
//	printf("Digite qual numero quer procurar:");
//	scanf("%d",&q);
//	r=ProcurarVetor(vetor,n,q,pos);
//	if(r==0) {
//		printf("Numero inexistente");
//	} else {
//		printf("O numero %d encontra-se na(s) posicao(coes):");
//		for(i=0;i<r;i++) {
//			printf("\n%d",pos[i]);
//		}
//	}
	
	//system("pause");
}
