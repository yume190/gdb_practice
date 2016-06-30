#include "bar.h"

int foo = 3;
int main() {
    foo = 8;
    bar(&foo);
    return 0;
}