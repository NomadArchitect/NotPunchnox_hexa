#include "./rouli.h"

void TurnZ(String sens, float speed, int cycle) {
    for (int i = 0; i < cycle; ++i) {
        if (sens == "anti-horaire") {
            Rouli(speed, 3.0, 0.0, 1.0, 0.0);
            Rouli(speed, 1.0, 0.0, 3.0, 0.0);
            Rouli(speed, 0.0, 1.0, 3.0, 0.0);
            Rouli(speed, 0.0, 3.0, 1.0, 0.0);
            Rouli(speed, 0.0, 3.0, 0.0, 1.0);
            Rouli(speed, 0.0, 1.0, 0.0, 3.0);
            Rouli(speed, 1.0, 0.0, 0.0, 3.0);
            Rouli(speed, 3.0, 0.0, 0.0, 1.0);
            Serial.println("Animation:Rouli:terminé");
        } else if (sens == "horaire") {
            Rouli(speed, 3.0, 0.0, 0.0, 1.0);
            Rouli(speed, 1.0, 0.0, 0.0, 3.0);
            Rouli(speed, 0.0, 1.0, 0.0, 3.0);
            Rouli(speed, 0.0, 3.0, 0.0, 1.0);
            Rouli(speed, 0.0, 3.0, 1.0, 0.0);
            Rouli(speed, 0.0, 1.0, 3.0, 0.0);
            Rouli(speed, 1.0, 0.0, 3.0, 0.0);
            Rouli(speed, 3.0, 0.0, 1.0, 0.0);
            Serial.println("Animation:Rouli:terminé");
        }
    }
}
