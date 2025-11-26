#include <stdio.h>

enum Status { SUCCESS=1, FAILURE=0, TIMEOUT=-1 };

int main() {
    enum Status s = TIMEOUT;

    if (s == SUCCESS) printf("Operation successful");
    else if (s == FAILURE) printf("Operation failed");
    else printf("Operation timed out");

    return 0;
}
