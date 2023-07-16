#include <errno.h>
#include <string.h>
#include <stdlib.h>

void err_handler(int signal){
    printf("Error occured.\n");
    exit(0);
}