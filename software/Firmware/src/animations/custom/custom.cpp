#include "../../config/config.h"
#include "../../config/Angles.h"
#include "../../functions/servo.h"

// Fonction principale pour effectuer un mouvement personnalisé pour une seule étape
void Custom(float animationMatrix[6][1][3], float speed) {
    float SPEED = 200 * speed;
    int numLegs = 6;

    float targetX[numLegs], targetZ[numLegs], targetY[numLegs];

    for (int leg = 0; leg < numLegs; ++leg) {
        targetX[leg] = animationMatrix[leg][0][0];
        targetZ[leg] = animationMatrix[leg][0][1];
        targetY[leg] = animationMatrix[leg][0][2];
    }

    int legIndices[] = {0, 1, 2, 3, 4, 5};
    moveLegsMatrices(legIndices, targetX, targetZ, targetY, numLegs, SPEED);
    delay(10);
    Serial.println("Animation:Custom:terminé");
}
