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

	if(status & (1 << 0)){
	printf("Erro de Inicializacao");
	}

	return 0;
}
