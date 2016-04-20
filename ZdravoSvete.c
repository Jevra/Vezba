#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[]){
	if(argc < 2){
		printf("***Error: Add year parameter.\n");
		_exit(1);
	}
	int year;
	sscanf(argv[1], "%d", &year);
	return 0;
}