#include <stdlib.h>

// Function that returns a random uppercase letter A–Z
char randchar() {
    return 'A' + (rand() % 26); 
}
