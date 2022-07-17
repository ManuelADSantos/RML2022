// =============================================================
// = Exemplo Lidares                                     RML2022
// = Clube de Robótica UC - Rev 1.0
// =
// = Descrição:
// = Este código permite testar os Lidares
// =
// =============================================================
#include "bot_RML2022.h"

bot_RML2022 jeff;

void setup()
{
    Serial.begin(9600);
    Serial.println("Teste Lidares");

    jeff.begin();
}

void loop()
{
    // Print de todos os lidares
    // jeff.lidarPrint();

    // Print 1 a 1
    Serial.println("Esquerda: " + String(jeff.lidarGetDistance(ESQUERDA)));
    Serial.println("Centro: " + String(jeff.lidarGetDistance(CENTRO)));
    Serial.println("Direita: " + String(jeff.lidarGetDistance(DIREITA)));
    Serial.println("\n\n");

    delay(1000);
}
