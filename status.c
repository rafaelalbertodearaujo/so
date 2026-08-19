#include <stdio.h>

/*
   Funcionando normalmente:    00000000
   Erro de inicializacao:      00000001
   Dispositivo nao encontrado: 00000010
   Erro de leitura:            00000100
   Erro de escrita:            00001000
*/

int main(){

	unsigned char status;

	printf("Insira o numero do erro: \n");
	scanf("%hhu", &status);

	if(status == 0){
		printf("Sem erros encontrados.\n");
	}

	if(status & (1 << 0)){ // 00000001 AND status = 00000001
		printf("Erro de Inicializacao.\n");
	}

	if(status & (1 << 1)){ // 00000010 AND status = 00000010
		printf("Erro de Escrita.\n");
	}

	if(status & (1 << 2)){ //00000100 AND status = 00000100
		printf("Erro de Leitura\n");
	}

	if(status & (1 << 3)){ // 00001000 AND status = 00001000
		printf("Erro\n");
	}

	return 0;
}
