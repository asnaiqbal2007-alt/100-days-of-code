#include <stdio.h>

enum Color {
    RED,        // 0
    GREEN,      // 1
    BLUE = 5,   // 5
    YELLOW      // 6
};

int main() {
    printf("RED = %d\n", RED);
    printf("GREEN = %d\n", GREEN);
    printf("BLUE = %d\n", BLUE);
    printf("YELLOW = %d\n", YELLOW);

    return 0;
}
