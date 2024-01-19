#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar();

char randchar () {
    char letter;
    letter = rand() % (90 + 1 - 65) + 65;
    return letter;
}


