#include <stdio.h>

#include "chaineCaractereMenu.h"
#include "../../domain/chap3/chaineCaractere.h"

void static showListOption();

void static selectOption(int choice);

void showChaineCaractereMenu() {
    int choice;
    do {
        printf("Bienvenue dans le chapitre 3\n");
        showListOption();
        printf("Choisissez une option: ");
        scanf("%d%*c", &choice);
        printf("\n");
        selectOption(choice);
    }while(choice != 4);
}

void static showListOption() {
    printf("1) Afficher une chaine de caractere\n");
    printf("2) Generer un mot de passe aleatoire\n");
    printf("3) Generer un code Cesar\n");
    printf("4) Quitter\n");
}

void static selectOption(const int choice) {
    switch(choice) {
        case 1:
            showCharacterString();
            break;

        case 2:
            generatePassword();
            break;

        case 3:
            generateCodeCesar();
            break;

        default:
            printf("Veuillez choisir une option dans la liste\n");
            printf("\n");
            break;
    }
}
