#include <stdio.h>

#include "view/mainMenu.h"

int main(void) {
    int choice;
    do {
        choice = showMainMenu();
    }while(choice != 6);

    return 0;
}
