#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    enum Role r = ADMIN;

    switch (r) {
        case ADMIN: printf("Admin Privileges Granted"); break;
        case USER: printf("User Access"); break;
        case GUEST: printf("Guest Access Only"); break;
    }

    return 0;
}
