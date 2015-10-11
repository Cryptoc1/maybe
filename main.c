#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

void sort_of_random(int* r);

void sort_of_random(int* r) {
    *r = (int) (rand() / (rand() * .25));
    if (*r == 0) {
        sort_of_random(r);
    } else {
        return;
    }
}

int main(int argc, char* argv[]) {
    srand(time(NULL));
    int i = 0;
    int r;
    char* maybe = "n";
    if (argc > 1) {
        maybe = argv[1];
    }
    while (i == 0) {
        int base = rand();
        sort_of_random(&r);
        if (base % r == 0) {
            maybe = "y";
        } else {
            maybe = "n";
        }
        printf("%s\n", maybe);
    }
}
