#include <stdio.h>

int main(int argc, char argv[]{
	if(argc < 1){
		printf("Hi whoever you are");
	}
	else if(argc > 1){
		printf("TOO MANY ARGUMENTS");
	}
	else if(argc == 1){
		printf("Hello %s", argv);
	}
}
