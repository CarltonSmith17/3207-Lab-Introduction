#include <stdlib.h>
#include <time.h>

// Function that returns a random uppercase letter A–Z
char randchar() {
    return 'A' + (rand() % 26); 
}
