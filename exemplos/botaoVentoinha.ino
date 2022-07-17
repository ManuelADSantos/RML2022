// =============================================================
// = Exemplo Botão e Ventoinha                           RML2022
// = Clube de Robótica UC - Rev 1.0
// =
// = Descrição:
// = Este código permite testar o botão e ventoinha do robô
// =
// =============================================================
#include "bot_RML2022.h"

bot_RML2022 jeff;

void setup()
{
    Serial.begin(9600);
    Serial.println("Teste Ventoinha e botao");

    jeff.begin();
}

void loop()
{
    if (jeff.readButton())
    {
        Serial.println("Ventoinha ON");
        jeff.fanOn(); // Liga a ventoinha
    }
    else
    {
        Serial.println("Ventoinha OFF");
        jeff.fanOff(); // Desliga a ventoinha
    }
    delay(250);
}
