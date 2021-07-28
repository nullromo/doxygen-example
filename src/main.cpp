#include "main.hpp"
#include "dog.hpp"
#include "utility.hpp"
#include <stdio.h>

int main(int argc, char** argv) {
    printf("Start\n\n");
    testNumbers();
    printf("\n");
    testDog();
    printf("\nEnd\n");
    return 0;
}

void testNumbers(void) {
    int x = 5;
    int y = 6;
    printf("Testing numbers...\n");
    printf("%d squared is %d\n", x, square(x));
    printf("%d times %d is %d\n", x, y, multiply(x, y));
    printf("The magic number is %d\n", MAGIC_NUMBER);
    printf("%d magicked is %d\n", x, magic(x));
    printf("Fight: %d\n", battleOfTheFiveGods());
    printf("Number test complete.\n");
}

void testDog(void) {
    printf("Testing Dog...\n");
    Dog* fido = new Dog("Fido");
    for (int i = 0; i < 5; i++) {
        fido->bark();
    }
    fido->sleep(1);
    for (int i = 0; i < 5; i++) {
        fido->bark();
    }
    fido->sleep(1000);
    fido->run(6);
    fido->run(3);
    fido->sleep(1);
    fido->bark();
    printf("Dog test complete.\n");
}
