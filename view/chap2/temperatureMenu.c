#include <stdio.h>

#include "temperatureMenu.h"
#include "../../domain/chap2/temperature.h"

void static selectOption(int choice);

void showTemperatureMenu() {
    int choice;
    do {
        printf("Bienvenue dans le menu de conversion de temperature\n");
        printf("1) Conversion F => C\n");
        printf("2) Conversion C => F\n");
        printf("3) Conversion in => cm\n");
        printf("4) Conversion cm => in\n");
        printf("5) Quitter\n");
        printf("Faites un choix: ");
        scanf("%d", &choice);
        printf("\n");
        selectOption(choice);
    }while(choice != 5);
}

void static selectOption(const int choice) {
    float value;
    double result;

    if(choice != 5) {
        printf("Veuillez enter une valeur: ");
        scanf("%f", &value);
    }

    switch(choice) {
        case 1:
            result = convertTemperature(value, 0);
            printf("Resultat: %f\n", result);
            printf("\n");
            break;

        case 2:
            result = convertTemperature(value, 1);
            printf("Resultat: %f\n", result);
            printf("\n");
            break;

        case 3:
            result = convertDistance(value, 0);
            printf("Resultat: %f\n", result);
            printf("\n");
            break;

        case 4:
            result = convertDistance(value, 1);
            printf("Resultat: %f\n", result);
            printf("\n");
            break;

        default:
            printf("Veuillez choisir une option dans la liste\n");
            printf("\n");
            break;
    }
}
