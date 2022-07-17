// =============================================================
// = Exemplo Sensor de Cor                               RML2022
// = Clube de Robótica UC - Rev 1.0

// = Descrição:
// = Este código permite testar o Sensor de Cor
// =
// =============================================================
#include "bot_RML2022.h"

bot_RML2022 jeff;

uint16_t RGBC[4];

void setup()
{
    Serial.begin(9600);
    Serial.println("Teste Sensor de Cor");

    jeff.begin();
}

void loop()
{
    jeff.getColor(RGBC);

    Serial.println("R: " + String(RGBC[0]) + "    G: " + String(RGBC[1]) + "    B: " + String(RGBC[2]) + "    C: " + String(RGBC[3]));

    delay(250);
}
