#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    int i = 0;
    char* no = "n";
    if (argc > 1) {
        no = argv[1];
    }
    while (i == 0) {
        printf("%s\n", no);
    }
}
