#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	
 	char ip[16];
 	int erro=0,i,num;
 
 	printf("Digite um ip:");
	scanf("%15s",&ip);
	char ipc[16];
	strcpy(ipc,ip);
		
   const char s[2] = ".";
   char *token;
   int contador=0;
   char *parcelas [5];
   
   /* get the first token */
   if((token=strtok(ipc, s))==NULL) {
   		erro=1;
   }
   
   /* walk through other tokens */
   
   while( token != NULL ) {
      parcelas[contador++]=token;
      token = strtok(NULL, s);
   }

	if(parcelas[1]==NULL) {
		erro=1;
	}
	
	if(erro==0) {
		num = atoi(parcelas[0]);
		
		erro=0;
		for(i=0;i<4;i++) {
			if((atoi(parcelas[i])>=0) && (atoi(parcelas[i])<=255)) {
				erro++;
			}
			if(parcelas[i]==NULL) {
				erro=1;
				break;
			}
			if(parcelas[i]!=NULL) {
				printf("",atoi(parcelas[i]),parcelas[i]);
			}
		}
		if(erro==4) {
			erro=0;
		}
	
		if(erro==0) {
			
			printf("\n\n\nInfo IP\nIp recebido:%s\nTipo de classe: ",ip);
			
			if(num < 1 || num > 255) {
				printf("ERRO!!! Ip invalido.\n");
				erro=1;
			} else {
				if(num<=126) {
					printf("Classe A\nMascara de rede default: 255.0.0.0");	
				} else {
					if(num<=191) {
						printf("Classe B\nMascara de rede default: 255.255.0.0");	
					} else {
						if(num<=223) {
							printf("Classe C\nMascara de rede default: 255.255.255.0");	
						} else {
							if(num<=239) {
								printf("Classe D");	
							} else {
								if(num<=255) {
									printf("Classe E");	
								}
							}
						}
					}
				}
			}
			
		
				printf("\nEndereco Privado ou Publico: ");
				if(num==10) {
					printf("Endereco Privado.");
				} else {
					int num2=atoi(parcelas[1]);
					if(num==172 && (num2>=16 && num2<32)) {
						printf("Endereco Privado.");
					} else {
						if(num==192 && num2==168) {
							printf("Endereco Privado.");
						} else {
							if(num==127) {
								printf("Endereco Loopback.");
							}
							else {
								printf("Endereco Publico.");
							}	
						}
					}
				}
				printf("\n\n\n");		
		}
		else {
			printf("Erro! IP invalido");
		}
	} 
	else {
		printf("Erro! IP invalido");
	}


	
	
 	













	//	printf("Hello World\n");
	//system("PAUSE");

}
