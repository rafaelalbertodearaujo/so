#include <stdio.h>
#include <unistd.h>

int main(){

	char buffer[10];
	int bytes;
	
	printf("Digite algo: ");
	
	bytes = read(0, buffer, sizeof(buffer));
	printf("Conteudo %s", buffer);	

	return 0;
}
