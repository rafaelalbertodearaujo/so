#include <stdio.h>
#include <unistd.h>

int main(){

	char buffer;

	read(0, buffer, sizeof(buffer));

}
