#include <stdio.h>

#include "mainMenu.h"
#include "chap2/temperatureMenu.h"
#include "chap3/chaineCaractereMenu.h"

void static showListChap();

void static selectChapter(int choice);

int showMainMenu() {
    int choice;
    do {
        printf("Bienvenue dans le programme synthèse de la partie 1 de OS\n");
        showListChap();
        printf("Choisissez un chapitre: ");
        scanf("%d", &choice);
        printf("\n");
        selectChapter(choice);
    }while(choice != 6);
    return choice;
}

void static showListChap() {
    printf("1) Chapitre 2: Notion de base\n");
    printf("2) Chapitre 3: Chaines de caracteres\n");
    printf("3) Chapitre 4: Les structures\n");
    printf("4) Chapitre 5: Les tableaux\n");
    printf("5) Chapitre 6: Les pointeurs\n");
    printf("6) Exit\n");
}

void static selectChapter(const int choice) {
    switch(choice) {
        case 1:
            showTemperatureMenu();
            break;

        case 2:
            showChaineCaractereMenu();
            break;

        case 3:
            printf("Chapitre pas encore disponible\n");
            printf("\n");
            break;

        case 4:
            printf("Chapitre pas encore disponible\n");
            printf("\n");
            break;

        case 5:
            printf("Chapitre pas encore disponible\n");
            printf("\n");
            break;

        default:
            printf("Veuillez choisir une option dans la liste\n");
            printf("\n");
            break;
    }
}
