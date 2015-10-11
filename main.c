#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    int i = 0;
    char* maybe = "m";
    if (argc > 1) {
        maybe = argv[1];
    }
    while (i == 0) {
        printf("%s\n", maybe);
    }
}
