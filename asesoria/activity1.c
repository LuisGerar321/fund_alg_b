#include <stdio.h>

int main( int argc, char ** argv){
    printf("programm running...\n");
    printf("You enter %d elemts in argv\n", argc);
    for (int i = 0; i<argc; i++) {
        printf("\telement %d: %s\n", i, argv[i]);  
    }


	return 0;	
}
