#include <stdio.h>
#include "../libraries/utils.h"
#include <stdlib.h>

int main(int argc, char** argv){
    
    for (int i = 10;  i <= 50; i += 10) {
        printf("%d:\n", i);
        sleep(1000);
        for (int j  = 1 ; j <= 3; j++ ) {
            printf("\t%d:\n", j);
            sleep(1000);
            for (int z  = 1 ; z <= 3; z++ ) {
                printf("\t\t...\n");
                sleep(1000);
            }
        }

    }
    return 0;
}