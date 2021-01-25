#include <stdio.h>
#include "utility.hpp"

int main(int argc, char** argv) {
    printf("start\n");
    int x = 5;
    int y = 6;
    printf("%d squared is %d\n", x, square(x));
    printf("%d times %d is %d\n", x, y, multiply(x, y));
    printf("the magic number is %d\n", MAGIC_NUMBER);
    printf("%d magicked is %d\n", x, magic(x));
    printf("end\n");
    return 0;
}

