#include <stdio.h>

int main( int argc, char ** argv){
    printf("programm running...\n");
    
    char* name =  argv[2];

    printf("Your name is: %s\n", name);
    printf("ArGc: %d\n", argc);

	return 0;	
}
