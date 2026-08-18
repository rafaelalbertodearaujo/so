#include <stdio.h>

int main(){

	unsigned char status;

	printf("Insira o numero do erro: \n");
	scanf("%hhu", &status);
	printf("%hhu", status);

	return 0;
}
