#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "chaineCaractere.h"

int static transformCaractere(int position);

void showCharacterString() {
    char string[200 + 1];
    printf("Veuillez entrer une chaine de caractere: ");
    scanf("%200[^\n]%*c", string);
    printf("Voici votre chaine de caractere: %s\n", string);
    printf("\n");
}

void generatePassword() {
    char password[10 + 1];
    const char possibilities[62 + 1] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
                             'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
                             '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int i;

    srand(time(NULL));
    for(i = 0; i < 10; i++) {
        const int value = (rand() % 62);
        password[i] = possibilities[value];
    }

    printf("Voici votre mot de passe: %s\n", password);
    printf("\n");
}

void generateCodeCesar() {
    const char alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char string[30 + 1];
    char code[30 + 1];
    int i;
    int j;

    printf("Veuillez entrer une chaine de 30 caracteres: ");
    scanf("%30[^\n]%*c", string);

    for(i = 0; i < 30; i++) {
        for(j = 0; j < sizeof(alphabet); j++) {
            if(string[i] == alphabet[j]) {
                code[i] = alphabet[transformCaractere(j)];
            }
        }
    }
    printf("Voici le code Cesar: %s\n", code);
    printf("\n");
}

int static transformCaractere(const int position) {
    int newPosition = position + 3;
    if(newPosition > 25) {
        newPosition -= 26;
    }
    return newPosition;
}
