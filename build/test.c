#include <stdio.h>
#include "sqlite3.h"

int main() {
    printf("SQLite version: %s\n", sqlite3_libversion());
    return 0;
}
