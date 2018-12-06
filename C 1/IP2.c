#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int binarizar(int a) {
	int i,b=0;
    for(i=7;i>=0;i--){
    	if(pow(2, i)<=a) {
    		a-= pow(2, i);
			b+= 1 * pow(10, i);
		}
	}
	return b;
}
int desbinarizar(int a) {
	int i,b=0;
    for(i=7;i>=0;i--){
    	if(a/pow(10,i)>=1) {
			b=b + pow(2,i);
		}
		a=fmod(a,pow(10,i));
	}
	return b;
}

void main() {
	
	int i,contador,x,y;
	int ip[4],masc[4],bip[4],bmasc[4];
//	int erro=1,x;
	
	
	printf("Digite um IP (x.x.x.x) :");
	scanf("%d.%d.%d.%d",&ip[0],&ip[1],&ip[2],&ip[3]);
	
	printf("Digite uma mascara (x.x.x.x) :");
	scanf("%d.%d.%d.%d",&masc[0],&masc[1],&masc[2],&masc[3]);
    
	for(i=0;i<4;i++){
		bip[i]=binarizar(ip[i]);
		bmasc[i]=binarizar(masc[i]);
		printf("Binario ip: %d - Binario masc: %d\nDecimal ip: %d - Decimal masc: %d\n\n",bip[i],bmasc[i],desbinarizar(bip[i]),desbinarizar(bmasc[i]));
	}
	contador=0;
	x=0;
	for(i=0;i<4;i++){
		if(masc[i]==255) {
			contador++;
		}
		else {
			if(masc[i]==0) {
				y=i;
			} else {
				x=i;
			}
			break;	
		}
	}
	
	if(x==0) {
		for(i=y;i<4;i++) {
			ip[i]=0;
		}
	}
    

//	while(erro==1) {
//		printf("Digite um IP (x.x.x.x) :");
//		if(scanf("%d.%d.%d.%d",&ip[0],&ip[1],&ip[2],&ip[3]) == 4) {
//			printf("lido com sucesso");
//			erro=0;
//		} else {
//			printf("falhou");
//		}
//	}
	
	
	

	printf("%d.%d.%d.%d",ip[0],ip[1],ip[2],ip[3]);

	//	printf("Hello World\n");
	//system("PAUSE");

}



