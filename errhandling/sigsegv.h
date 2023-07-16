#include <signal.h>
#include <stdlib.h>

void segfault_handler(int signal) {
    printf("Segmentation fault occurred.\n");
    exit(0);
}