#include <stdio.h>
#include <unistd.h>

int main(){

	int bytes;
	char buffer[10];
	char mensagem [] = "Digite algo: ";
	
	write(1, mensagem, sizeof(mensagem));
	
	read(0, buffer, sizeof(buffer));
	
	write(1, buffer, sizeof(buffer));	

	return 0;
}
