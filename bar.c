#include <stdlib.h>

void bar(int *val) {
    *val = 11;
   val = NULL;
    *val = 17;
}
