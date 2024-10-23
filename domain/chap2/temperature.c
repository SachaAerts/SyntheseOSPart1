#include "temperature.h"

double convertDistance(const float distance, const int isDistanceCM) {
    if(isDistanceCM == 0) {
        return (1 / 0.39370) * distance;
    }
    return distance / (1 / 0.39370);
}

double convertTemperature(const float temperature, const int isTemperatureCelsius) {
    if(isTemperatureCelsius == 0) {
        return (temperature * 1.8) + 32;
    }
    return (temperature - 32) / 1.8;
}
