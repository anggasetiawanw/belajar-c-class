#include <stdio.h>

enum kondisiSuhu {
    DINGIN_BOS,
    PANAS_BOS,
};

struct person {
    /* data */
    char initialName;
    int tangglLahir;
};

struct sensor {
    float sensorSuhu;
    float sensorUdara;
};

void readSensor(struct sensor *sensors) {
    sensors->sensorSuhu = 10;
    sensors->sensorUdara = 100;
}

int main() {
    struct person fadil;
    fadil.tangglLahir = 13;
    fadil.initialName = 'C';
    struct sensor allSensor;
    readSensor(&allSensor);

    printf("Sensor Suhu : %f\n", allSensor.sensorSuhu);

    printf("nilai Enum LOW: %d\n", DINGIN_BOS);
    printf("nilai Enum MEDIUM: %d\n", DINGIN_BOS);
}